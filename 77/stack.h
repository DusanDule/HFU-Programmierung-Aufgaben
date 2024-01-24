#ifndef _STACK_H
#define _STACK_H
#include "C:\Users\xdule\OneDrive\Desktop\HFU Programmierung Aufgaben\klammerung.cpp"

struct Stack {
    void init();

    int lastIndex;

    char elements[];

    void push(char element);

    char pop();

    char top();

    unsigned int size() const;

    bool empty() const;

    void clear();

};


#endif 