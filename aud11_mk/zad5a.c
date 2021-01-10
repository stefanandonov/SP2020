//
// Created by Stefan Andonov on 12/24/20.
//
#define MAX 100

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>


char * clean(char string[100]) {
    int j=0,i;
    char result [100];
    for (i=0;i<strlen(string);i++) {
        if (isalpha(string[i])) {
            result[j]=tolower(string[i]);
            ++j;
        }
    }
    result[j]='\0';
    return result;
}

int isPalindrome(char s1[100]) {
    int i, n = strlen(s1);
    for (i = 0; i < n; i++)
        if (tolower(s1[i]) != tolower(s1[n - i - 1]))
            return 0;

    return 1;
}

int main() {
    char string[MAX];
    gets(string);
    //clean(string);
    printf("%d\n", isPalindrome(clean(string)));
    return 0;
}