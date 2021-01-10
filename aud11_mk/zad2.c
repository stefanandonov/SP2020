//
// Created by Stefan Andonov on 12/24/20.
//
#define MAX 100

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int length(char string[100]) {
    int i, counter = 0;
//    while (*string!='\0') {
//        ++counter;
//        string++;
//    }
    for (i = 0; string[i] != '\0'; i++)
        ++counter;

//    for (counter=0;string[counter]!='\0';counter++);
    return counter;
}

int lengthRecursive(char *string) {
    if (*string == '\0')
        return 0;
    else
        return 1 + lengthRecursive(string + 1);
}

int main() {
    char string[MAX];

    gets(string);

    printf("%d", lengthRecursive(string));
    printf("%d", strlen(string));
}