#include <ctype.h>
#include <stdio.h>
#include <stdlib.h> // für die  atoi-Funktion
    /*                                                      // AUFGABE 1
int berechne(char op, int v1, int v2) 
{
int ergebnis;

switch (op) {

case '+':
ergebnis = v1 + v2;
break;

case '-':
ergebnis = v1 - v2;
break;

case '*':
ergebnis = v1 * v2;
break;

case '/':
if (v2 != 0) 
{
 ergebnis = v1 / v2;
} 
else {
printf("Fehler: Division durch 0 ist nicht erlaubt.\n");
return -999;
}
break;


default:
printf("Fehler: Ungültiger Operator '%c'.\n", op);
return -999;
}

    return ergebnis;
}

int main() {
    char op = '*';  
    int v1=20;
    int v2=5;

    int result = berechne(op, v1, v2);

    if (result != -999) {
        printf("Ergebnis: %d\n", result);
    }

    return 0;
}  /


// AUFGABE 2
/*
#include <stdio.h>


int berechne(char op, int v1, int v2) {
    switch(op) {
        case '+':
            return v1 + v2;
        case '-':
            return v1 - v2;
        case '*':
            return v1 * v2;
        case '/':
            if (v2 != 0) {
                return v1 / v2;
            } else {
                fprintf(stderr, "Fehler: Division durch 0 ist nicht erlaubt.\n");
                return -999;
            }
        default:
            fprintf(stderr, "Fehler: Ungültiger Operator '%c'.\n", op);
            return -999;
    }
}

int main(int argc, char *argv[]) {
   
    if (argc != 4) {
        fprintf(stderr, "Fehler: Falsche Anzahl von Argumenten. Verwendung: Rechner <Operator> <Wert1> <Wert2>\n");
        return 1; 
    }


    char op = argv[1][0];
    int v1 = atoi(argv[2]);
    int v2 = atoi(argv[3]);


    if (op != '+' && op != '-' && op != '*' && op != '/') {
        fprintf(stderr, "Fehler: Ungültiger Operator '%c'.\n", op);
        return 1;
    }

    
    int ergebnis = berechne(op, v1, v2);
    if (ergebnis != -999) {
        printf("Ergebnis: %d\n", ergebnis);
    }

    return 0;
}
*/

/*
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
COMMAND LINE CODE


C:\Users\xdule>cd C:\Users\xdule\OneDrive\Desktop\HFU Programmierung Aufgaben

C:\Users\xdule\OneDrive\Desktop\HFU Programmierung Aufgaben>g++ aufgabe7.cpp -o ausgabe

C:\Users\xdule\OneDrive\Desktop\HFU Programmierung Aufgaben>ausgabe.exe - 10 20
Ergebnis: -10

C:\Users\xdule\OneDrive\Desktop\HFU Programmierung Aufgaben>ausgabe.exe + 10 20
Ergebnis: 30

C:\Users\xdule\OneDrive\Desktop\HFU Programmierung Aufgaben>

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*/


                                        // AUFGABE 3
/*


long while_schleife(long x, long y)
 {
while (x != y)
 {

if (x > y) 
{
x -= y;
}

 else
{
 y -= x;
}

 }

 return x;
}


long rekursiv(long x, long y)

 {
    if (x == y) {
 return x;
} else if (x > y) {
return rekursiv(x - y, y);
} else {
 return rekursiv(x, y - x);
}
}

int main() 
{
   
    long x = 12, y = 24;

    printf("Größter gemeinsamer Teiler (while): %ld\n", while_schleife(x, y));
    printf("Größter gemeinsamer Teiler (rekursiv): %ld\n", rekursiv(x, y));

    return 0;
}
*/

// AUFGABE 4

/*



int primZahl(int x) {

    if (x <= 1) 
    {
        return 0; // false
    }

 
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) 
        {
        return 0; // false
        }
    }

    return 1; // true
}

int main() 
{
    int zahl = 2;

    if (primZahl(number)) {
     printf("%d ist eine Primzahl.\n", zahl);
    } else {
    printf("%d ist keine Primzahl.\n", zahl);
    }

    return 0;
}
*/



// AUFGABE 5
/*




void stat(const char* s){

int Zeichen = 0;
int Woerter = 0;

while (*s)
{
    if (isspace(*s) == 0)
    {
        Zeichen ++ ;

     if (isspace(*(s + 1)) || *(s + 1) == '\0') {
        Woerter++;
     }
    }
    s++;
}
printf("Anzahl der Zeichen= %i \n", Zeichen);
printf("Anzahl der Woerter= %i", Woerter);

}



int main(int argc, char const *argv[])
{
char s[100] = "Dusan ist ein Daddy"; 

    stat(s);


    return 0;
}

*/

// AUFGABE 6




void stat(const char* s, int* z, int* w) {
    *z = 0;  
    *w = 0;  

    while (*s) {
 if (isspace(*s)== 0) {
 (*z)++; 
 if (isspace(*(s + 1)) || *(s + 1) == '\0')
{               
 (*w)++;
 }
}

 s++;  
    }
}


int main() 
{

    char s[100] = "Dusan ist ein Daddy"; 
    int zeichen, worte;


    stat(s, &zeichen, &worte);


    printf("Anzahl der Zeichen = %i\n", zeichen);
    printf("Anzahl der Worte = %i", worte);

    return 0;
}






