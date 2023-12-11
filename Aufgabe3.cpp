#include<stdio.h>


/* int main(int argc, char** argv)                                           // AUFGABE 1
 {
 unsigned int jahr = 2019;

 if((jahr % 4 == 0 && jahr % 100 != 0) || (jahr % 400 == 0))  
 {
 printf("Das Jahr %u ist ein Schaltjahr !\n", jahr);
 }
 else
 {
 printf("Das Jahr %u ist kein Schaltjahr! \n", jahr);
 }
 return 0;
 } */



                                                                                // AUFGABE 2


#include <iostream> 
using namespace std; 
  

void decToBinary(int n)  // die funktion, mit den n wert was von main mitgenommen wurde
{   for (int i = 3; i >= 0; i--) {  // Hier wird eine for schleife genutzt, um 4 zahlen rauszugeben, heißt die schleife wird 4 mal ausgeführt
 int k = n >> i;    // hier wird mithilfe von Binary Shift operator die binäre zahl um i geshiftet, heißt es fängt bei der höchsten binären wert an, und geht runter
  if (k & 1) // hier wird eine und operation ausgeführt, und mit 0001 quasi verglicen. das passiert 4 mal (für 4 bits), die immer wieder geshiftet werden. falls die UND anweisung true ist:
{
 cout << "1"; // falls ja, print 1
 }
 else
 {
 cout << "0"; // falls nein, print 0
 }
  } 
} 
  
// driver code 
int main() 
{ 
    int n = 12;  // hier wird die gewünschte zahl eingetragen
    decToBinary(n); // hier wird die funktion aufgerufen, und die nimmt die variable n mit den inhalt zum ausführen
}




 /* int main(int argc, char** argv)                                     // AUFGABE 3
 {
 int x=0;
 int f;
 if(x<0)
 {
  f=-1;
 }
 else if(x==0)
 {
  f=0;
 }
 else if(x>0)
 {
  f=1;
 }
 else
 {
  return 0;
 }
 printf("f(%i)=%i\n" , x, f );

 return 0;
 } */




/* #include <iostream>                                                      // AUFGABE 4
#include <cmath> 

 int main()
 {
double p=5;
double q=3;
double x1;
double x2;


double w=p*p/4-q;
if(w<0)
{
  printf("Es gibt keine lösung weil der würzelinhalt negativ ist");
  return 0;
}
else if(w==0)
{
  x1=-p/2+sqrt(w);
  printf("Es gibt eine Lösung: x1=x2=%lf",x1);
  return 0;
}
else if(w>0)
{
x1=-p/2+sqrt(w);
x2=-p/2-sqrt(w);

printf("Es gibt zwei Lösungen: x1=%lf x2=%lf",x1,x2);

return 0;
}
else
{
return 0;
}
 } */




 /* int main()                                                                            // AUFGABE 5
 {
  int jahresMonat; // Mein IDE lässt mich nicht eingeben, ich kann nicht rausfinden wieso, deswegen sind die eingaben so eingegeben!
  int jahr=2004;
 // scanf("%d",&jahresMonat);
  if(jahresMonat>12 || jahresMonat<0 || jahr<0 )  
  {
    printf("Ungültige Monats oder Jahesangabe!");
    return 0;

  }



if (((jahr % 4 == 0 && jahr % 100 != 0) || (jahr % 400 == 0)) && jahresMonat==2)
{
  printf("Februar im Jahr %i, hat 29 Tage!",jahr);
  return 0;
}

else
{
switch (jahresMonat)
{  
case 1:
printf("Januar im Jahr %i, hat 31 Tage!\n",jahr);
break;
case 3:
printf("März im Jahr %i, hat 31 Tage!\n",jahr);
break;
case 5:
printf("Mai im Jahr %i, hat 31 Tage!\n",jahr);
break;
case 7:
printf("Juli im Jahr %i, hat 31 Tage!\n",jahr);
break;
case 8:
printf("August im Jahr %i, hat 31 Tage!\n",jahr);
break;
case 10:
printf("Oktober im Jahr %i, hat 31 Tage!\n",jahr);
break;
case 12: 
printf("Dezember im Jahr %i, hat 31 Tage!\n",jahr);

break;

case 2:
printf("Februar im Jahr %i, hat 28 Tage!\n",jahr);
break; 

case 4:
printf("April im Jahr %i, hat 30 Tage!\n",jahr);
break;
case 6:
printf("June im Jahr %i, hat 30 Tage!\n",jahr);
break;
case 9:
printf("September im Jahr %i, hat 30 Tage!\n",jahr);
break;
case 11: 
printf("November im Jahr %i, hat 30 Tage!\n",jahr);
break;

default:
break;
  }

return 0;
}
  }
*/




