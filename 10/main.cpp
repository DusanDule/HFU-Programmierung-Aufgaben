#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>
using namespace std;
#include "C:\Users\xdule\OneDrive\Desktop\HFU Programmierung Aufgaben\10\SafeArray.hpp"

int main(){
//////////A2

   int c;
   cout<<"Default Wert angeben"<<endl;
   cin>>c;
   SafeArray sAa(c); 
//////////A1
  /*  int a;
   int b;
    cout <<"Array Position angeben"<<endl;
   cin >> a;
   cout <<"Wert angeben"<<endl;
   cin >> b;
   if(sAa.setAt(a,b)){
    cout<<"Eingabe gültig"<<endl;
   }else if(sAa.setAt(a,b)==false){
    cout<<"Eingabe nicht gültig"<<endl;
   }
   cout<<sAa.getAt(a)<<endl;  */
///////// A3
/*
  int anf, end, val;
   cout<<"Befüllen von Platz:"<<endl;
   cin>>anf;
   cout<<"Befüllen bis Platz:"<<endl;
   cin>>end;
   cout<<"Befüllungswert:"<<endl;
  cin>>val;
  if(sAa.fill(anf,end,val)){
    cout<<"Eingabe gültig"<<endl;
   }else if(sAa.fill(anf,end,val)==false){
    cout<<"Eingabe nicht gültig"<<endl;
   }
   cout<<"Der kleinste Wert: "<< sAa.getMinimum()<<endl;*/
}
