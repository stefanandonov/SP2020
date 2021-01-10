//
// Created by Stefan Andonov on 12/24/20.
//
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 100

int calculateLength(char *string) {
    int i,count = 0;
    while (*string!='\0') {
        ++count;
        ++string;
    }

//    for (i=0;string[i]!='\0';i++) {
//        ++count;
//    }
    return count;
}

int calculateLengthRecursive (char * string) {
    if (*string=='\0')
        return 0;
    else
        return 1 + calculateLengthRecursive(++string);
}

int main () {
    char string [MAX];

    gets(string);

    printf("%d\n", calculateLength(string));
    printf("%d\n", calculateLengthRecursive(string));
    printf("%lu", strlen(string));
    return 0;
}