#include<stdio.h>
#include<iostream>

                                                                                                                                // AUFGABE 1

 /*int main()
  {
for (int zaehler = 0; zaehler != 10; zaehler = zaehler + 1)  // die schleife wird 10 mal ausgeführt, es fängt bei 0 an und ended bei 9 weil der zähler nicht 10 sein (!=). Output: 0123456789
{
printf("%i",zaehler);

}
return 0;


  }    */


// for (int n = 10; n > 0; n = n - 1)  // Läuft solange n nicht 0 ist, heißt, fängt bei 10 an, und hört bei 1 auf, weil sonst n==0 wäre
// for (int x = 1; x <= 15; x = x + 3) // wird immer um 3 erhöht, heißt der output ist 4,7,10,13
//  for (int x = 1; x != 15; x = x + 3) // theoretisch sollen zahlen: 4,7,10,13 raus kommen, genau wie oben. es kommen viele radom zahlen - ka wieso, sollst nachfragen1!!
//  for(int x = 1; x == 15; x = x + 3) // ich bekomme gar kein output hier, nur return 0
//  for (char c = ’5’; c <= ’9’; c = c + 2) // hier werden die charaktere ins das binäre umgewandelt, und dann um 2 erhöt. deswegen kommen da 3 ergebnisse raus: 53,55,57





/*
int main()
  {


 for (char c = '5'; c <= '9'; c = c + 2)
{
printf("%i \n",c);

}
return 0;


 } 
 */


                                                                                                                        // AUFGABE 2


/*

int main()
{

int ISBNarraysize;
char ISBNArray[13] = {9,7,8,3,4,4,6,4,6,4,7,0,4}; 
int arrPlace=0;
int zResult=0;
int finalResult=0;
int z=0;
int i=0;


//printf("Wie viele ziffern hat Ihre ISBN nummer? \n ")
//scanf("%d",ISBNarraysize) 

/*printf("Schreibe die die nummern, nach jeder nummer drücker ENTER: \n ")
int ISBNArray[ISBNarraysize];
 for(i=0,i<13,i++)  // die ISBN nummer wird geholt
{
scanf("%d",&ISBNArray[i]);
}*/
/*
for(z=0;z<6;z++)
{ 
zResult = ISBNArray[arrPlace];                                 // ziffer x1
finalResult = zResult + finalResult;
arrPlace++;

zResult = ISBNArray[arrPlace] * 3;                         //ziffer x3
finalResult = zResult + finalResult;
arrPlace++;
}
finalResult = finalResult + ISBNArray[12]; // 13 ziffer rein bringen weil man das nicht so easy in der schleife machen kann
printf("Result final : %i \n ", finalResult); 

if(finalResult % 10  == 0)
{
printf("Die ISBN/ESN Nummer ist korrekt!");
return 0;
}
else
{
printf("Die ISBN/ESN Nummer ist nicht korrekt!");
return 0;
}

return 0;
} 
*/




                                                                                        //  AUFGABE 3
 /* int main()
  {
float zahl1=1.0;
float zahl2=1.0;
float ergebnis;
float koeffizient;

printf("Anfangszahlen: \n f1 = %.0f \n f2 = %.0f \n",zahl1,zahl2);

for(int i=0;i<21;i++)
{
ergebnis=zahl1+zahl2;
koeffizient=(ergebnis/zahl1);
printf("f_%i = %.0f   %.6f \n",i,ergebnis,koeffizient);
zahl2=zahl1;
zahl1=ergebnis;

}


return 0;
  }
  
  */
                                                                                      // AUFGABE 4



/*                                      // TEILAUFGABE 1
int main()
{
float A=2;
float zwischenWert=1;
int nummerierung=0;



for(int i=0; i<5; i++)
{
  
zwischenWert = (zwischenWert+(A / zwischenWert))/2;
printf("x%i beträgt: %f \n",nummerierung,zwischenWert);
nummerierung++;

}

printf("Endwert ist: %f \n ",zwischenWert);
return 0;
}
*/

                                                            // TEILAUFGABE 2
/* int main()
{
double A=2;
double zwischenWert=1;
double Anfangswert;
int nummerierung=0;
int test;


Anfangswert = zwischenWert;


do
{

zwischenWert = (zwischenWert+(A / zwischenWert))/2;
printf("x%i beträgt: %f \n",nummerierung,zwischenWert);
nummerierung++;


} while((Anfangswert-zwischenWert) <= 0.000001);  // fragen

printf("Endwert ist: %f \n ",zwischenWert);
return 0;
} 
*/



                                                          // AUFGABE 5

/* int main()
{
int zeile,spalte;
for(zeile = 20 ;zeile >= 1 ; zeile = zeile - 1)  // zeile soll 20 anstatt 1 sein, es soll runter zählen
 {
 for (spalte = 1 ; spalte <= zeile; spalte = spalte + 1) // die spalte korresponider zu der zeile oben, deswegen wird der dreieck geflippt
 {
 printf("*") ;
 }
 printf( "\n" ) ;
 }
} */


                                                          // AUFGABE 6
/*
#include <stdio.h>


void printBinUmgekehrt(int n) {  
    printf("Binärdarstellung: ");
    while (n > 0) {
        int bit = n % 2;
        printf("%d", bit);
        n /= 2;
    }
    printf("\n");
}

int main() {
    int zahlDez=12;
    
    //printf("Geben Sie eine ganze Zahl ein: ");
    //scanf("%d", &number);

 if (zahlDez < 0) {
        printf("Keine negativen zahlen! \n");
        return 0;
    }

    if (zahlDez == 0) {
        printf("Binärzahl: 0000\n");
        return 0;
    }

    printBinUmgekehrt(zahlDez);

    return 0;
}*/
