//
// Created by Stefan Andonov on 12/24/20.
//
#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define MAX 100


void trim(char string[100]) {
    int i,j = 0;
    int n = strlen(string);
    int start,end;

    for (i=0;i<n;i++) {
        if (!isspace(string[i])) {
            start = i;
            break;
        }
    }

    for (i=n-1;i>=0;i--) {
        if (!isspace(string[i])) {
            end = i;
            break;
        }
    }

    for (i=start;i<=end;i++) {
        string[j++]=string[i];
    }
    string[j]='\0';
}

int main() {
    char string[MAX];

    gets(string);
    trim(string);
    puts(string);
    printf("%d", strlen(string));


    return 0;
}