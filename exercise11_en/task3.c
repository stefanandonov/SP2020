//
// Created by Stefan Andonov on 12/24/20.
//
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 100


void getSubstring(char * string, char * result, int start, int size) {
    if (start<strlen(string)) {
        string+=start;
        strncpy(result, string, size);
        result[size]='\0';
    } else {
        printf("Not compatible bla bla\n");
    }
}

int main () {
    char string [MAX];
    char result [MAX] = "";
    int start, size;
    gets(string);
    scanf("%d%d", &start, &size);

    getSubstring(string, result, start, size);

    puts(result);

    return 0;
}