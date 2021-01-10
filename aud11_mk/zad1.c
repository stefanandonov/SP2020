//
// Created by Stefan Andonov on 12/24/20.
//
#define MAX 100

int countOccurrance(char character, char string[100]);

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int countOccurrence(char character, char string[100]) {
    int i,counter = 0;
//    while (*string!='\0') {
//        if (*string==character)
//            ++counter;
//        ++string;
//    }
    for (i=0;i<strlen(string);i++) {
        if (string[i]==character)
            ++counter;
    }

//    for (i=0;string[i]!='\0';i++) {
//        if (string[i]==character)
//            ++counter;
//    }
    return counter;
}
int main () {
    char string [MAX];
    char character;

    gets(string);
    scanf("%c", &character);

    printf("%d", countOccurrence(character, string));
}


