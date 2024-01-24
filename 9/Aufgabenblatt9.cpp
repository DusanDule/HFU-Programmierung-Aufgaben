#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>
#include <cstdio>
#include <cstring>
#include "C:\Users\xdule\OneDrive\Desktop\HFU Programmierung Aufgaben\9\stack.h"
#include "C:\Users\xdule\OneDrive\Desktop\HFU Programmierung Aufgaben\9\stack.cpp"
#include "C:\Users\xdule\OneDrive\Desktop\HFU Programmierung Aufgaben\9\klammerungs.cpp"



//Aufgabe 1+2
/*
char SpeicherA[100];
int indexTop = -1;

char fehler(){
printf("Fehler");
return 0;
}

void push(char c) {
    int max = 100;
    if (indexTop < max - 1) {
        SpeicherA[++indexTop] = c;
    }
    else{
        fehler();
    }

}
char pop() {
    if (indexTop >= 0) {
        return SpeicherA[indexTop--];
    }else{
        return fehler();
    }
}
char top() {
    if (indexTop >= 0) {
        return SpeicherA[indexTop];
    }else{
        return fehler();
    }
}
unsigned int size() {
    return indexTop + 1;
}
bool leer() {
    return indexTop == -1;
}
void clear() {
    indexTop = -1;
}
int main() {
    clear();
    push('a');
    push('b');
    push('c');


    printf("Oberstes Element: %c\n", top()); 

    pop();
    printf("Anzahl Elemente: %i\n", size()); 

    pop();
    printf("Oberstes Element: %c\n", top()); 

    pop();
    printf("Ist der Speicher leer?: %s\n", (leer() ? "ja" : "nein")); 

    printf("Anzahl Elemente: %i\n", size());

    return 0;
}
*/
//Aufgabe 3

/*
bool contains(char elements[], char c) {
    char *pC = elements;
    while (*pC != '\0') {
        if (*pC == c) {
            return true;
        }
        pC++;
    }
    return false;
}

bool isValidString(char string[]) {
    char elements[] = {'(', ')', '{', '}', '[', ']'};
    //Go through each character
    char *s = string;
    while (*s != '\0') {
        if (!contains(elements, *s)) {
            return false;
        }
        s++;
    }
    return true;
}

bool isOpenBracket(const char *c) {
    char openBrackets[] = {'(', '[', '{'};
    return contains(openBrackets, *c);
}

bool isClosedBracket(const char *c) {
    char closedBrackets[] = {')', ']', '}'};
    return contains(closedBrackets, *c);
}

bool isMatchingClosingBracket(const char *openBracket, const char *closingBracket) {
    switch (*openBracket) {
        case '(': {
            return *closingBracket == ')';

        }
        case '[': {
            return *closingBracket == ']';
        }
        case '{':
            return *closingBracket == '}';
        default:
            return false;
    }
}


int main() {
    char string[100];
    printf("Please enter a few brackets...\n");
    fgets(string, 99, stdin);
    //Trim the string
    string[strcspn(string, "\n")] = '\0';
    //Check if it is valid
    if (!isValidString(string)) {
        printf("You entered invalid characters");
        return -1;
    }
    Stack stack;
    stack.init();
    char *pString = string;
    while (*pString != '\0') {
        if (isOpenBracket(pString)) {
            stack.push(*pString);
        } else {
            char lastOpenBracket = stack.pop();
            if (!isMatchingClosingBracket(&lastOpenBracket, pString)) {
                printf("Invalid match");
                return -1;
            }
        }
        pString++;
    }
    if (!stack.empty()) {
        printf("Some brackets remain unclosed.");
    }
    return 0;

}*/

//Aufgabe 4

//Aufgabe 6

void swap(int *a, int *b) {
    int intermediate = *a;
    *a = *b;
    *b = intermediate;
}


void sort(int *a, unsigned int length) {
    int i, j;
    bool swapped;
    for (i = 0; i < length - 1; i++) {
        swapped = false;
        for (j = 0; j < length - i - 1; j++) {
            int *firstElementPointer = (a + j);
            int *secondElementPointer = (a + j + 1);
            if (*firstElementPointer > *secondElementPointer) {
                swap(firstElementPointer, secondElementPointer);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}


int main() {
    int array[] = {15, 7, 13, 24, 9, 25};
    sort(array, 6);
    for (int i = 0; i < 6; i++) {
        printf("Array: %i\n", array[i]);
    }


}
