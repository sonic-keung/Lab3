#include <iostream>
#include "stack.hpp"

constexpr int MAXSTACK = 9;

// push to stack if stack is not full
bool stack::push(int pushInt) {
    if (!full()) {
        topStack++;
        maxArraySize[topStack] = pushInt;
        return true;
    } else {
        std::cout << "Stack full" << std::endl;
        return false;
    }
}

// pop from stack if it not empty
void stack::pop() {
    if (!empty()) {
        int idxTemp = topStack;
        topStack--;
    } else {
        std::cout << "Stack empty" << std::endl;
    }
}

// return top of stack
int stack::top() const {
    if (!empty()) {
        return maxArraySize[topStack];
    }
}

// return true if empty, otherwise false
bool stack::empty() const {
    if (topStack == -1) {
        return true;
    } else {
        return false;
    }
}

// return true if full, otherwise false
bool stack::full() const {
    if (topStack == MAXSTACK) {
        return true;
    } else {
        return false;
    }
}

// display stack
void stack::print() const {
    if (!empty()) {
        for (int i = topStack; i >= 0; i--) {
            std::cout << maxArraySize[i] << " " << std::endl;
        }
    }
}