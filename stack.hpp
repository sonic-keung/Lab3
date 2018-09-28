#include <iostream>

struct stack {
    private:
        // max size of stack
        constexpr static int maxSize = 10;
        // array size of max size
        int maxArraySize[maxSize];
        // int to store index of the current top of the stack
        int topStack;

    public:
        // initialize the index of top to -1
        stack() : topStack(-1) {};
        // return true if added to stack, else false
        bool push(int);
        // pop out of stack
        void pop();
        // return top of stack
        int top() const;
        // true if stack is empty
        bool empty() const;
        // true if stack is full
        bool full() const;
        // print stack
        std::string print() const;

};