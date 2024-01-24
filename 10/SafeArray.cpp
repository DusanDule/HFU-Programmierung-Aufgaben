#include "C:\Users\xdule\OneDrive\Desktop\HFU Programmierung Aufgaben\10\SafeArray.hpp"
#include <iostream>
using namespace std;



SafeArray::SafeArray(int stdW){
    for(int i = 0; i<maxS; i++){
        arr[i] = stdW;
    }
}

bool SafeArray::setAt(unsigned int pos, int val){
if(pos<maxS){
arr[pos]=val;
return true;
}
else{
    return false;
}
}


int SafeArray::getAt(unsigned int pos){
  if(pos<maxS){
    return arr[pos];
  }
  return 999;
}

int SafeArray::getMinimum(){
  int min= arr[0];
  for(int m =0;m<maxS;m++){
    if(arr[m]<min){
     min = arr[m];
    }
  }
 return min;
}

bool SafeArray::fill(unsigned int pos1, unsigned int pos2, int value){
if(pos1 <= pos2 && pos2 < maxS){
  for(int i = pos1; i<=pos2;i++){
    arr[i]=value;
  }
  return true;
}
return false;
}