#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>




/*

char SpeicherA[100];
int indexTop = -1;

char fehler(){
printf("Fehler\n");
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
    clear();
    push('a');
    
    return 0;
}
*/



#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>
#include "C:\Users\xdule\OneDrive\Desktop\HFU Programmierung Aufgaben\stack.h"


int main() {
    char string[100] = "((()))";

    string[strcspn(string, "\n")] = '\0';
    
    if (!isValidString(string)) {
        printf("Falsche eingabe");
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
                printf("Falsche eingabe");
                return -1;
            }
        }
        pString++;
    }
    if (!stack.empty()) {
        printf("Klammern nicht geschlossen.");
    }
    return 0;

}
