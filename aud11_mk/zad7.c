//
// Created by Stefan Andonov on 12/24/20.
//
#define MAX 100

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>


void clean(char string[100]) {
    int j=0,i;

    for (i=0;i<strlen(string);i++) {
        if (isalpha(string[i])) {
            if (islower(string[i])) {
                string[j]=toupper(string[i]);
            } else {
                string[j]=tolower(string[i]);
            }
            ++j;
        }
    }
    string[j]='\0';
}

int main() {
    char string[MAX];
    gets(string);
    clean(string);
    printf("%s\n", string);
    return 0;
}