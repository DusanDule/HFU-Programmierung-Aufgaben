#include <stdio.h>
/*
// Definition der Struktur "Punkt"                          // AUFGABE 1
struct Punkt {
    int x;
    int y;
};

int main() {
   
    struct Punkt p1 = {3, 5};  // Beispielwerte
    struct Punkt p2 = {7, 2};  // Beispielwerte

    // Berechnung der Summe der x- und y-Werte
    int summevonX = p1.x + p2.x;
    int summevonY = p1.y + p2.y;

    // Erstellung einer dritten Variable vom Typ "Punkt" und Zuweisung der berechneten Werte
    struct Punkt ergebnisPunkt = {summevonX, summevonY};

    // Ausgabe der Ergebnisse
    printf("p1: (%d, %d)\n", p1.x, p1.y);
    printf("p2: (%d, %d)\n", p2.x, p2.y);
    printf("Summe der x-Werte: %d\n", summevonX);
    printf("Summe der y-Werte: %d\n", summevonY);
    printf("Ergebnis-Punkt: (%d, %d)\n", ergebnisPunkt.x, ergebnisPunkt.y);

    return 0;
}*/
                                                          // AUFGABE 2

/*
     // Definition der Struktur für einen Punkt
struct Punkt {
    int x;
    int y;
};

// Funktion, um eine Zufallszahl zwischen 0 und max zu generieren
int randInt(int max) {
    static unsigned int seed = 1;
    seed = seed * 1103515245 + 12345;
    return (seed / 65536) % (max + 1);
}

int main() {
    // Array von Punkten erstellen
    struct Punkt punktArray[50];

    // Array mit Zufallszahlen füllen
    for (int i = 0; i < 50; ++i) {
        punktArray[i].x = randInt(99);  // Beispiel: Zufallszahl zwischen 0 und 99
        punktArray[i].y = randInt(99);
    }

    // Kleinsten x-Wert und Position finden
    int kleinsterX = punktArray[0].x;
    int positionKleinsterX = 0;

    for (int i = 1; i < 50; ++i) {
        if (punktArray[i].x < kleinsterX) {
            kleinsterX = punktArray[i].x;
            positionKleinsterX = i;
        }
    }

    // Kleinsten y-Wert und Position finden
    int kleinsterY = punktArray[0].y;
    int positionKleinsterY = 0;

    for (int i = 1; i < 50; ++i) {
        if (punktArray[i].y < kleinsterY) {
            kleinsterY = punktArray[i].y;
            positionKleinsterY = i;
        }
    }

    // Ausgabe der Ergebnisse
    // printf-Funktion wird hier nicht verwendet
    // Man könnte die Werte mit putchar oder anderen Methoden ausgeben

    return 0;
}
*/

                                                     // AUFGABE 3
/*
#include <stdio.h>

// Aufzählungstyp für Monate
typedef enum {
    JANUAR = 1, FEBRUAR, MARZ, APRIL, MAI, JUNI, JULI, AUGUST, SEPTEMBER, OKTOBER, NOVEMBER, DEZEMBER
} Monat;

// Struktur "Datum" mit Tag, Monat und Jahr
typedef struct {
    int tag;
    Monat monat;
    int jahr;
} Datum;

// Funktionen zur Ausgabe des Datums in verschiedenen Varianten
void druckeDatum1(Datum d) {
    printf("%d.%d.%d\n", d.tag, (int)d.monat, d.jahr);
}

void druckeDatum2(Datum* d) {
    printf("%d.%d.%d\n", d->tag, (int)d->monat, d->jahr);
}

int main() {
    // Deklaration und Initialisierung einer Variable vom Typ "Datum"
    Datum meinDatum = {7, DEZEMBER, 2023};

    // Aufruf der Funktionen zur Ausgabe des Datums
    printf("Variante 1 (Parameter per Wert): ");
    druckeDatum1(meinDatum);

    printf("Variante 2 (Parameter per Zeiger): ");
    druckeDatum2(&meinDatum);

    return 0;
}
*/

                                                    // AUFGABE 4

/*                                         
typedef enum {
    JANUAR = 1, FEBRUAR, MÄRZ, APRIL, MAI, JUNI, JULI, AUGUST, SEPTEMBER, OKTOBER, NOVEMBER, DEZEMBER
} Monat;

// Struktur "Datum" mit Tag, Monat und Jahr
typedef struct {
    int tag;
    Monat monat;
    int jahr;
} Datum;

// Funktion, die prüft, ob das Datum a vor dem Datum b liegt
int bevor(const Datum* a, const Datum* b) {
    if (a->jahr < b->jahr) {
        return 1;
    } else if (a->jahr == b->jahr) {
        if (a->monat < b->monat) {
            return 1;
        } else if (a->monat == b->monat) {
            return a->tag < b->tag;
        }
    }
    return 0;
}

// Funktion zum Testen der "bevor"-Funktion
void testeBevor() {
    // Testfälle
    Datum d1 = {1, JANUAR, 2023};
    Datum d2 = {1, JANUAR, 2023};
    Datum d3 = {15, JANUAR, 2023};
    Datum d4 = {1, FEBRUAR, 2023};
    Datum d5 = {1, JANUAR, 2024};
    Datum d6 = {1, JANUAR, 2022};

    // Testausgaben (1: true, 0: false)
    int result1 = bevor(&d1, &d2);
    int result2 = bevor(&d1, &d3);
    int result3 = bevor(&d1, &d4);
    int result4 = bevor(&d1, &d5);
    int result5 = bevor(&d5, &d6);

    // Hier können Sie die Ergebnisse verwenden, um zu überprüfen, ob die Funktion wie erwartet funktioniert
}

int main() {
    // Testen der Funktion
    testeBevor();

    return 0;
}
*/

                                                                  // AUFGABE 5

/*
#include <stdio.h>

// Definition der Vektor-Struktur
struct Vektor {
    float x;
    float y;
};

// Funktion für das Skalarprodukt
float skalarProdukt(const struct Vektor* a, const struct Vektor* b) {
    return a->x * b->x + a->y * b->y;
}

// Funktion für die Vektorsumme
struct Vektor vektorSumme(const struct Vektor* a, const struct Vektor* b) {
    struct Vektor result;
    result.x = a->x + b->x;
    result.y = a->y + b->y;
    return result;
}

// Funktion für das Kreuzprodukt
struct Vektor kreuzProdukt(const struct Vektor* a, const struct Vektor* b) {
    struct Vektor result;
    result.x = a->x * b->y - a->y * b->x;
    result.y = a->x * b->y - a->y * b->x;
    return result;
}

// Funktion für die Multiplikation eines Vektors mit einem Skalar
struct Vektor skalierterVektor(float faktor, const struct Vektor* x) {
    struct Vektor result;
    result.x = faktor * x->x;
    result.y = faktor * x->y;
    return result;
}

int main() {
    // Testen der Funktionen
    struct Vektor v1 = {2.0, 3.0};
    struct Vektor v2 = {4.0, 1.5};

    printf("Skalarprodukt: %f\n", skalarProdukt(&v1, &v2));

    struct Vektor summe = vektorSumme(&v1, &v2);
    printf("Vektorsumme: (%f, %f)\n", summe.x, summe.y);

    struct Vektor kreuz = kreuzProdukt(&v1, &v2);
    printf("Kreuzprodukt: (%f, %f)\n", kreuz.x, kreuz.y);

    float faktor = 1.5;
    struct Vektor skaliert = skalierterVektor(faktor, &v1);
    printf("Skalierter Vektor: (%f, %f)\n", skaliert.x, skaliert.y);

    return 0;
}
*/

                                                      // AUFGABE 6
/*
#include <stdio.h>
#include <string.h>

// Struktur für das Geburtsdatum
struct Datum {
    int tag;
    int monat;
    int jahr;
};

// Struktur für eine Person
struct Person {
    char name[20];
    char vorname[20];
    struct Datum geburtsdatum;
};

// Funktion zum Finden und Ausgeben des Geburtsdatums einer Person
void findeGeburtsdatum(const struct Person* personen, int personenzahl, const char* gesuchterName, const char* gesuchterVorname) {
    for (int i = 0; i < personenzahl; ++i) {
        if (strcmp(personen[i].name, gesuchterName) == 0 && strcmp(personen[i].vorname, gesuchterVorname) == 0) {
            printf("%s %s wurde am %d. %d. %d geboren.\n", gesuchterVorname, gesuchterName, personen[i].geburtsdatum.tag, personen[i].geburtsdatum.monat, personen[i].geburtsdatum.jahr);
            return; // Person gefunden, Funktion beenden
        }
    }

    // Falls die Schleife durchlaufen wurde und die Person nicht gefunden wurde
    printf("Person %s %s nicht gefunden.\n", gesuchterVorname, gesuchterName);
}

int main() {
    // Initialisierung der Personendatenbank
    struct Person personen[] = {
        {"Dusan", "Risteski", {12, 12, 2002}},
        {"Duschan", "Ristesky", {12, 12, 2003}},
        {"Dule", "Rist", {12, 12, 2004}},
        // Weitere Personen nach Bedarf hinzufügen
    };

    int personenzahl = sizeof(personen) / sizeof(personen[0]);

    // Testen der Funktion
    findeGeburtsdatum(personen, personenzahl, "Dusan", "Risteski");
    findeGeburtsdatum(personen, personenzahl, "Duschan", "Ristesky");

    return 0;
}
*/

                                                     // AUFGABE 7

/*

 int main( ) {
 int zahlen [ 5 ] ;
 int i , j ;
for ( i = 2 0; i > 1 5; i=i =1)
{
 zahlen[20 - i] = i % 3 ;
 }
 for ( i = 0 ; i < 5 ; i=i +1)
 {
 for ( j = 5 ; j > 0 ; j=j =2)
 {
 zahlen[5 - j] = zahlen [ i / 2] + zahlen [j  - 1];
 }
 }
 return 0 ;
 }
*/

#include <stdio.h>

int main() {
    int zahlen[5];
    int i, j;

    // Äußere Schleife
    for (i = 20; i > 15; i = i - 1) {
        zahlen[20 - i] = i % 3;
    }

    // Innere Schleife
    for (i = 0; i < 5; i = i + 1) {
        for (j = 5; j > 0; j = j - 2) {
            zahlen[5 - j] = zahlen[i / 2] + zahlen[j - 1];
        }
    }

    // Ausgabe der Werte
    for (i = 0; i < 5; i = i + 1) {
        printf("zahlen[%d] = %d\n", i, zahlen[i]);
    }

    return 0;
}
