//
// Created by Stefan Andonov on 12/24/20.
//
#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define MAX 100

int isPalindrome(char * string) {
    int i;
    int n = strlen(string);
    int length = n;
    for (i=0;i<n/2;i++) {
        if (string[i]!=string[n-i-1])
            return 0;
    }

//    while (length>n/2) {
//        if (*string!=*(string+length-1))
//            return 0;
//        ++string;
//        --length;
//    }
    return 1;
}

int main() {
    char string[MAX];

    gets(string);

    printf("%d\n", isPalindrome(string));


    return 0;
}