#include <iostream>

#include "stack.h"

int main(int arg, char* argv[])
{
    Stack<int> S;
    int x;
    S.Push(1);
    S.Push(2);
    S.Push(3);
    x = S.Top();
    std::cout << x << std::endl;
    S.Pop();
    x = S.Top();
    std::cout << x << std::endl;
    S.Clear();
    S.Push(3);
    x = S.Top();
    std::cout << x << std::endl;
    S.~Stack();
    std::cin.sync();
    std::cin.get();
    return 0;
}
