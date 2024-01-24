#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>
#include "C:\Users\xdule\OneDrive\Desktop\HFU Programmierung Aufgaben\stack.h"

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
    
    char *s = string;
    while (*s != '\0') {
        if (!contains(elements,*s)) {
            return false;
        }
        s++;
    }
    return true;
}

bool isOpenBracket(const char *c) {
    char openBrackets[] = {'(', '[', '{'};
    return contains(openBrackets,*c);
}

bool isClosedBracket(const char *c) {
    char closedBrackets[] = {')', ']', '}'};
    return contains(closedBrackets,*c);
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