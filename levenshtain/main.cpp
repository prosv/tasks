#include <iostream>

int str_length(char str[])

{
   int i;
   for (i = 0; str[i] != '\0'; i++);
   return i;
}

int levenshtain (char s1[], char s2[])
{
        const int len1 = str_length(s1);
        const int len2 = str_length(s2);
        int *matr = new int [(len1+1)*(len2+1)];
        for(int i = 0; i <= len1; ++i)
            matr[i] = i;
        for(int i = 1; i <= len2; ++i)
            matr[i*(len1+1)] = i;
        for(int i = 1; i <= len2; ++i)
                for(int j = 1; j <= len1; ++j)
                      matr[i*(len1+1)+j] = std::min( std::min(matr[(i - 1)*(len1+1)+j] + 1
                                                   , matr[i*(len1+1)+j-1] + 1)
                                                   , matr[(i - 1)*(len1+1)+j-1] + (s1[i - 1] == s2[j - 1] ? 0 : 1) );
        return matr[(len1+1)*(len2+1)-1];
}
int main(int arg, char* argv[])
{
    std::cout << levenshtain ("1123ыва","123ыав");
    std::cin.sync();
    std::cin.get();
    return 0;
}

