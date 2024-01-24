#ifndef _SAFEARAY_HPP
#define _SAFEARAY_HPP
#include <iostream>
using namespace std;

class SafeArray{
private:
    static const int maxS = 100;
    int arr[maxS];
public:
    SafeArray(int stdW){};
    bool setAt(unsigned int pos, int val);
    int getAt(unsigned int pos);
    int getMinimum();
    bool fill(unsigned int pos1, unsigned int pos2, int value);
};

#endif