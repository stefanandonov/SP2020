//
// Created by Stefan Andonov on 12/24/20.
//
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 100
//Additional requirement: ignore the case of the character
int calculateOccurrence(char * string, char character) {
    int i,counter = 0;
//    while (*string!='\0') {
//        if (*string==character)
//            ++counter;
//        ++string;
//    }
    for (i=0;i<strlen(string);i++) {
        if (tolower(string[i])==tolower(character))
            ++counter;
    }
    return counter;
}

int main () {
    char string [MAX];
    char character;

    gets(string);
    //scanf("%s", string); it will stop on the first space do not use it!
    scanf("%c", &character);

    printf("%d", calculateOccurrence(string, character));
    return 0;
}