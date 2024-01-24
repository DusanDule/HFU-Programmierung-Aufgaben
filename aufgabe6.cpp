#include <cstdio>

#include <cstring>




/*                                                              //AUFGABE1
int main() {
    int n = 5;
    int m = 10;
    int y;

    int *pn = &n;
    int *pm = &m;
    int *py = &y;

    printf("n: %i, m: %i\n", n, m);

 
    *py = *pn;
    *pn = *pm;
    *pm = *py;
    printf("Vertaucht: n: %i, m: %i\n", n, m);

    return 0;
}
*/
                                                        // AUFGABE 2

/*
void printLength(char *string) {
    int laenge = 0;
    while (*string != '\0') {
        laenge++;
        string++;
    }
    printf("The length of the string is %i\n", laenge);
}

int main() {
    char string1[80] = "DUSANRISTESKI";

    printf("You entered %s\n", string1);

    printLength(string1);

    return 0;
}
*/


 /*                                                          // AUFGABE 3
double getFibonacciNumber(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    double ergebnis = 0;
    double letzteswert = 0;
    double zwischenwert = 1;
    for (int i = 2; i <= n; i++) {
        ergebnis = letzteswert + zwischenwert;
        letzteswert = zwischenwert;
        zwischenwert = ergebnis;
    }
    return ergebnis;
}


int main() {
    double fibonacciNumbers[51];

    for (int i = 0; i <= 50; i++) {
        fibonacciNumbers[i] = getFibonacciNumber(i);
    }

    
    double *ptr = fibonacciNumbers;
    for (int i = 0; i <= 50; i++) {
        printf("%i: %.0f\n", i, *ptr);
        ptr++;
    }

    return 0;
}
*/

/*                                                              // AUFGABE 4
int quadrat(int zahl) {
    return zahl * zahl;
}

int main() {
    for (int i = 0; i < 20; i++) {
        printf("quadrat(%i) = %i\n", i, quadrat(i));
    }
}
*/



/*                                                                // AUFGABE 5
void dreh(const char* s) {

    int laenge = 0;
    const char* ptr = s;

    while (*ptr != '\0') {
        laenge++;
        ptr++;
    }

   
    for (int i = laenge - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }

    printf("\n");
}

int main() {
    
char string[50]="DUSANDULE";

dreh(string);

    return 0;
}
*/



   /*                                                              // AUFGABE 6
void zp(int a, int b) {
    
    if (a <= 0 || b <= 0 || a > b || a != 10 || b != 200) {
    printf("Ungültige Eingabe amk, die eingabe muss 10 und 200 sein alter\n");
        return;
    }

   
    int exponent = 0;
    while ((1 << exponent) < a) {
        exponent++;
    }

   
    while ((1 << exponent) <= b) {
        printf("%d ", 1 << exponent);
        exponent++;
    }

    printf("\n");
}

int main() {
   
    zp(10, 200);

    return 0;
}
*/


                                                             // AUFGABE 7
int vorkommen(const char *s, const char *m)
{
    int count = 0;
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == m[0])
        {
            int j = 0;
            while (s[i + j] == m[j] && m[j] != '\0')
            {
                j++;
            }
            if (m[j] == '\0')
            {
                count++;
            }
        }
        i++;
    }

    return count;
}

int main() {
    const char* s = "DUSAN DULE DUKI";
    const char* m = "DU";

    int result = vorkommen(s, m);

    printf("Das Muster \"%s\" kommt im String \"%s\" %d Mal vor.\n", m, s, result);

    return 0;
}
