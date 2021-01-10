//
// Created by Stefan Andonov on 12/24/20.
//
#define MAX 100

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>


void trim(char string[100]) {
    int i, start, end = 0;

    for (i=0;i<strlen(string);i++)
        if (isalpha(string[i])) {
            start = i;
            break;
        }

    for (i=strlen(string)-1;i>=0;i--) {
        if (isalpha(string[i])) {
            end = i;
            break;
        }
    }

    int j = 0;
    for (i=start;i<=end;i++) {
        string[j]=string[i];
        j++;
    }
    string[j]='\0';
}

int main() {
    char string[MAX];
    gets(string);
    trim(string);
    printf("%s\n", string);
    printf("%d", strlen(string));
    return 0;
}