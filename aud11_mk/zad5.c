//
// Created by Stefan Andonov on 12/24/20.
//
#define MAX 100

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

//Dopolnitelno: Ignore case.
int isPalindrome(char s1[100]) {
    int i, n = strlen(s1);
    for (i = 0; i < n; i++)
        if (tolower(s1[i]) != tolower(s1[n - i - 1]))
            return 0;

    return 1;
}

int isPalindromeRecursive (char * s, int start, int end) { //start = 0, end = strlen(s)-1;
    if (start>=end)
        return 1;
    else {
        if (tolower(s[start])!=tolower(s[end])) {
            return 0;
        } else {
            return isPalindromeRecursive(s, start+1, end-1);
        }
    }
}

int main() {
    char s1[MAX];
    gets(s1);
    printf("%d\n", isPalindrome(s1));
    printf("%d", isPalindromeRecursive(s1, 0, strlen(s1)-1));

    return 0;
}