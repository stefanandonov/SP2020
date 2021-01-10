//
// Created by Stefan Andonov on 12/24/20.
//
#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define MAX 100


void clean(char string[100]) {
    char temp[100];
    int i, j = 0;

    for (i = 0; i < strlen(string); i++) {
        if (isalpha(string[i])) {
            string[j] = islower(string[i]) ? toupper(string[i]) : tolower(string[i]);
            ++j;
        }
    }

    string[j] = '\0';

}

int main() {
    char string[MAX];

    gets(string);
    clean(string);
    puts(string);


    return 0;
}