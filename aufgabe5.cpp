#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <iostream>
#include <string.h>

//Laurin stinkt4567

/*
int main()
{                                                          // AUFGABE 1
    int summe_gerade = 0;
    int summe_ungerade = 0;

    int randomArray[20];
    for (int i = 0; i < 20; i++) {
    randomArray[i] = rand() % 50 + 1;
    }

    
    printf("Array mit Zufallszahlen:\n");
    for (int i = 0; i < 20; i++)
 {
  printf("%d ", randomArray[i]);
 }
    printf("\n");




for (int i = 0; i < 20; i++) {
 if (randomArray[i] % 2 == 0)
{
   summe_gerade += randomArray[i];
}
else
  {
  summe_ungerade += randomArray[i];
  }
}

    printf("Summe geraden Zahlen: %d\n", summe_gerade);
    printf("Summe ungeraden Zahlen: %d\n", summe_ungerade);

    return 0;
}

*/

                                                        //AUFGABE 2
/*
int main() {

   
    int randomArray[100];
    for (int i = 0; i < 100; i++) {
    randomArray[i] = rand() % 51; 
    }

    int wieoftArray[51] = {0}; 

    for (int i = 0; i < 100; i++) {
    int y = randomArray[i];
    wieoftArray[y]++;
    }

    
    printf("Array mit Zufallszahlen:\n");
    for (int i = 0; i < 100; i++) {
    printf("%d     ", randomArray[i]);
    }


    printf("Array mit Häufigkeiten:\n");
    for (int i = 0; i < 51; i++) {
    printf("Die Zahl %d kommt %d mal vor.\n", i, wieoftArray[i]);
    }

    return 0;
}
*/

                                                            // AUFGABE 3


/*

void toBinary(int n, int binaryArray[]) {
    int z = 0;
    
    while (n > 0) {
    binaryArray[z] = n % 2;
    n /= 2;
    z++;  
    }
}

int main() {
    int zahl=12;
int binaryArray[4]; 
    
    //printf("Geben Sie eine Ganzzahl ein: ");
    //scanf("%d", &zahl);

    if (zahl < 0) {
     printf("Versuche eine positive zahl einzugeben! \n");
     return 0; 
    }

    toBinary(zahl, binaryArray);

   
    printf("Die binärzah lautet:");
    for (int i = 3; i >= 0; i--) {
    printf("%d", binaryArray[i]);
    }
    printf("\n");

    return 0;
}
                                             
*/


                                                            //AUFGABE 4





/*
int main() {
char eingabe[100] = "Dusan Risteski";

    
   //printf("Ihre Zeichenkette: ");
    //scanf("%s", eingabe);

    

 int selberAusLaenge = 0;

    while (eingabe[selberAusLaenge] != '\0') 
    {
    selberAusLaenge++;
    }
    
    int strlnLaenge = strlen(eingabe);

   
    printf("Selber ausgerechnete Länge: %d\n", selberAusLaenge);
    printf("Länge mit funktion strlen(): %d\n", strlnLaenge);

    return 0;
}
*/
                                                //AUFGABE 5

/*

int main() {
    char string1[100] = "Dule";
    char string2[100] = "Dulee";
    int ergebnis;
    
    //printf(" Erste Zeichenkette: "); /////////////////////////////////////////////////////////
    //scanf("%s", string1);             // selber schreiben ohne funktion
    //printf("Zweite Zeichenkette: ");
    //scanf("%s", string2);

    
    ergebnis = strcmp(string1, string2);

    if (ergebnis == 0) {
    printf("Die Zeichenketten sind gleich.\n");
    } else {
    printf("Die Zeichenketten sind nicht gleich\n");
    }
 return 0;
}
*/
                                                    // AUFGABE 6

/*
int main() {
    char eingabe[100] = "Dusan23*3- " ; 
    int laenge = strlen(eingabe);
    int start = 0;
    int ende = laenge -1;
    char zwischenSpeicher;

    while (start < ende) 
    {
  zwischenSpeicher = eingabe[start];
 eingabe[start] = eingabe[ende];
 eingabe[ende] = zwischenSpeicher;
       
start++;
ende--;
    }

    printf("Umgekehrte Zeichenkette: %s \n", eingabe);

    return 0;
}
*/
                                                                           // AUFGABE  7



/*
int main() {
char eingabe[100] = "DuleRisteski";
char ausgabe[100];

int laenge = strlen(eingabe);

int p = 0;
for (int i = 0; i < laenge; i++) 
{
char eingArrPlace = eingabe[i];

if (tolower(eingArrPlace) != 'a' && tolower(eingArrPlace) != 'e' && // ohnetolower ohne bibs
tolower(eingArrPlace) != 'i' && tolower(eingArrPlace) != 'o' &&
tolower(eingArrPlace) != 'u') 
{

ausgabe[p] = eingArrPlace;
p++;

}
}

printf("%s ohne Vokale ist: %s\n",eingabe, ausgabe);
return 0;

}
*/
                                                // AUFGABE 8

// mit der funktion strcat()

/*
int main() {
    char arr1[100] = "dusan";
    char arr2[100] = "risteski"; // die 2. zeichnenkette soll kleiner als der erste sein, im besten fall doppelt zu klein, weil die in das erste arrar reingefüght wird

    strcat(arr1, arr2);
    printf("Ergebnis mithilfe von strcat: %s \n", arr1);

    return 0;
}
*/




// manuelle ausgabe
/*
int main()
{
char arr1[100] = "dusan";    // beide zusammen in eine variable reinzwiebeln
char arr2[100] = "risteski";

printf("Zwei angegebene zeichnenketten zusammen lauten: %s%s",arr1,arr2);

return 0;
}
*
