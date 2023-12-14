
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

                                                           // AUFGABE 1

/*
struct Punkt
{
    int x;
    int y;

};


int main(int argc, char const *argv[])
{
    struct Punkt p1 = {11,34};
    struct Punkt p2 = {15,24};
    struct Punkt p3 = {p1.x + p2.x, p1.y + p2.y};
    
    printf("Punkt1: %i/%i \n", p1.x, p1.y);
    printf("Punkt2: %i/%i \n", p2.x, p2.y);
    printf("Punkt3: %i/%i \n", p3.x, p3.y);

    return 0;
}

*/
                                                   // AUFGBABE 2

   /*                                                

struct Punkt
{
    int x;
    int y;

};


int main(int argc, char const *argv[])
{
    srand(time(0));
    
    struct Punkt p[50];

    for (int i = 0; i < 50; i++)
    {
       p[i].x = rand() % 51;
       p[i].y = rand() % 51;
    }
    
    int min_x = 0;
    for (int i = 0; i < 50; i++) {
        if (p[i].x < p[min_x].x) {
            min_x = i;
        }
    }

    int min_y = 0;
    for (int i = 0; i < 50; i++) {
        if (p[i].y < p[min_y].y) {
            min_y = i;
        }
    }


    for (int i = 0; i < 50; i++) {
        printf("Punkt %d: (%d, %d)\n", i , p[i].x, p[i].y);
    }

    printf("Minimaler X Punkt: %i (%i/%i) \n", min_x, p[min_x].x, p[min_x].y);
    printf("Minimaler Y Punkt: %i (%i/%i)", min_y, p[min_y].x, p[min_y].y);

    return 0;
}
*/
                                  // AUFGABE 3
/*



struct Datum
{
    int Tag;
    int Monat;
    int Jahr;
};

enum Monate {Januar = 1, Februar, Maerz, April, Mai, Juni, Juli, August, September, Oktober, November, Dezember};



void druckeDatum(struct Datum d){

printf("Das Datum lautet: %i.%i.%i \n", d.Tag, d.Monat, d.Jahr);


}

void druckeDatumref(struct Datum &d){

printf("Das Datum lautet: %i.%i.%i \n", d.Tag, d.Monat, d.Jahr);


}

void druckeDatumpointer(struct Datum *d){

printf("Das Datum lautet: %i.%i.%i \n", d->Tag, d->Monat, d->Jahr);


}

int main(int argc, char const *argv[])
{
    struct Datum Tag1 = {7, Dezember, 2023};

   
    druckeDatum(Tag1);
    druckeDatumref(Tag1);
    druckeDatumpointer(&Tag1);



    return 0;
}
*/

                                                            // AUFGABE 4
/*


struct Datum
{
    int Tag;
    int Monat;
    int Jahr;
};

enum Monate {Januar = 1, Februar, Maerz, April, Mai, Juni, Juli, August, September, Oktober, November, Dezember};



bool bevor(const struct Datum &a, const struct Datum &b)
{

    if (a.Jahr < b.Jahr) {
        return true;
    } else if (a.Jahr == b.Jahr && a.Monat < b.Monat) {
        return true;
    } else if (a.Jahr == b.Jahr && a.Monat == b.Monat && a.Tag < b.Tag) {
        return true;
    } else {
        return false;
    }
}



int main(int argc, char const *argv[])
{
    struct Datum Tag1 = {11, August, 2023};
    struct Datum Tag2 = {12, November, 2022};

   

    if (bevor (Tag1,Tag2))
    {
       printf("Tag 1 liegt vor Tag 2 ");
    }
    else 
    {
       printf("Tag 1 liegt nicht vor Tag 2");
    }
    
    

    return 0;
}

*/
                                                                        // AUFGABE 5
/*



struct Vektor
{
    float x;
    float y;
};


float skalarProdukt(const Vektor& a, const Vektor& b)
{
    return (a.x * b.x) + (a.y * b.y);
}


Vektor vektorSumme(const Vektor& a, const Vektor& b)
{
    Vektor ergebnis;
    ergebnis.x = a.x + b.x;
    ergebnis.y = a.y + b.y;
    return ergebnis;
}


Vektor kreuzProdukt(const Vektor& a, const Vektor& b)
{
    Vektor ergebnis;
    ergebnis.x = (a.x * b.y) - (a.y * b.x);
    ergebnis.y = (a.y * b.x) - (a.x * b.y);
    return ergebnis;
}


Vektor skalierterVektor(float faktor, const Vektor& x)
{
    Vektor ergebnis;
    ergebnis.x = faktor * x.x;
    ergebnis.y = faktor * x.y;
    return ergebnis;
}



int main(int argc, char const *argv[])
{
    struct Vektor v1 = {2.0, 3.0};
    struct Vektor v2 = {5.0, 6.0};
    
    float skalarp = skalarProdukt(v1,v2);
    printf("Skalarprodukt: %f \n", skalarp);

    Vektor VSumme = vektorSumme(v1,v2);
    printf("Vektorsumme: %f , %f \n", VSumme.x, VSumme.y);

    Vektor KrProdukt = kreuzProdukt (v1,v2);
    printf("Kreuzprodukt: %f , %f \n", KrProdukt.x, KrProdukt.y);

    Vektor Skaliert1 = skalierterVektor (skalarp, v1);   
    printf("Skalierter Vektor v1: %f , %f \n", Skaliert1.x, Skaliert1.y);

    Vektor Skaliert2 = skalierterVektor (skalarp, v2);   
    printf("Skalierter Vektor v2: %f , %f \n", Skaliert2.x, Skaliert2.y);

    return 0;
}
*/

                                                            // AUFGABE 6
/*

struct Datum
{
    int Tag;
    int Monat;
    int Jahr;
};

enum Monate {Januar = 1, Februar, Maerz, April, Mai, Juni, 
Juli, August, September, Oktober, November, Dezember};

struct Person
{
    char Vorname[50];
    char Name [50];
    struct Datum Geburtsdatum;
};




void findeGeburtsdatum(struct Person Personen[], int Personenzahl, const char* Vorname, const char* Name) {
    for (int i = 0; i < Personenzahl; ++i) {
        if (strcmp(Personen[i].Vorname, Vorname) == 0 && strcmp(Personen[i].Name, Name) == 0) {
            printf("%s %s wurde am %d.%d.%d geboren \n", Personen[i].Vorname, Personen[i].Name,
                   Personen[i].Geburtsdatum.Tag, Personen[i].Geburtsdatum.Monat, Personen[i].Geburtsdatum.Jahr);
            return; 
        }
    }

 
    printf(" %s %s wurde nicht gefunden\n", Vorname, Name);
}



int main(int argc, char const *argv[])
{
    struct Person Personen[] = {
        {"Isaac", "Newton", {4, Januar, 1643}},
        {"Gottfried", "Leibniz", {1, Juli, 1646}},
        {"Albert", "Einstein", {14, Maerz, 1879}},
        {"Galileo", "Galilei", {15, Februar, 1564}},
        {"Martin", "Luther", {10, November, 1483}}
    };

    int Personenzahl = sizeof(Personen) / sizeof(Personen[0]);
   

    findeGeburtsdatum(Personen, Personenzahl, "Albert", "Einstein");

    return 0;
}

*/
                                                                          // AUGABE 7
/*

int main () {
    int zahlen[5];
    int i, j;
    for (i = 20; i > 15; i= i-1){
        zahlen[20-i] = i % 3 ;
    }


    for (i = 0; i < 5; i= i+1){
        for (j = 5; j > 0; j= j-2){
            zahlen [5-j] = zahlen [i/2] + zahlen [j-1];
        }
    }
 return 0 ;
}

// zahlen[20 - 20] = 20 % 3 = zahlen[0] = 2
// zahlen[20 - 19] = 19 % 3 = zahlen[1] = 1 
// zahlen[20 - 18] = 18 % 3 = zahlen[2] = 0
// zahlen[20 - 17] = 17 % 3 = zahlen[3] = 2
// zahlen[20 - 16] = 16 % 3 = zahlen[4] = 1 

*/