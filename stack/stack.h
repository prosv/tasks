#ifndef STACK_H
#define STACK_H

#endif // STACK_H
#pragma once

template <class T>
class Stack
{
private:
        int length;
        T *mas_stack;
        // mas_stack[length-1] - вершина стека
public:
        Stack()
        {
                length = 0;
                mas_stack = NULL;
        }

        ~Stack()
        {
                delete[] mas_stack;
                mas_stack = NULL;
        }

        int Size()
        {
                return length;
        }

        void Push(T x)
        {
                length++;
                T *add_elem = new T [length];
                for (int i = 0; i<length-1; i++){
                    add_elem[i] = mas_stack [i];
                }
                add_elem[length-1] = x;
                delete [] mas_stack;
                mas_stack = add_elem;
        }
        void Pop()
        {
               if (length != 0){
                   length--;
                   T *delete_elem = new T [length];
                   for (int i = 0; i<length; i++){
                       delete_elem[i] = mas_stack[i];
                   }
                   delete [] mas_stack;
                   mas_stack = delete_elem;
               }
            /* length--;
               ѕроще, но не освобождаетс€ пам€ть, которую занимал элемент на вершине стека */
        }
        T Top()
        {
               return mas_stack[length-1];
        }
        void Clear()
        {
             delete [] mas_stack;
             length = 0;
             mas_stack = NULL;
        }

        bool IsEmpty()
        {
              return length == 0;
        }
};
