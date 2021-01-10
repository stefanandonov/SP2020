//
// Created by Stefan Andonov on 12/24/20.
//
#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define MAX 100


int checkSubstring(char *substring, char *string) {
    int i,lenSubString = strlen(substring);
    int lenString = strlen(string);
    if (lenSubString > lenString) {
        return 0;
    } else if (lenSubString == lenString) {
        return !strcmp(substring, string);
    } else {
        for (i=0;i<=lenString-lenSubString;i++) {
            if (!strncmp(string + i, substring, lenSubString)) {
                return 1;
            }
        }
        return 0;
    }
}

int main() {
    char string[MAX];
    char substring[MAX];

    gets(substring);
    gets(string);

    printf("%d\n", checkSubstring(substring, string));
    printf("%d", strstr(string, substring)!=NULL);


    return 0;
}