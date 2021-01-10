//
// Created by Stefan Andonov on 12/24/20.
//
#define MAX 100

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>


int isSubstring(char s1[100], char s2[100]) {
    int i, s1Len = strlen(s1);
    int s2Len = strlen(s2);

    if (s1Len > s2Len) {
        return 0;
    } else if (s1Len == s2Len) {
        return strcmp(s1, s2) == 0;
    } else {
        for (i = 0; i < s2Len - s1Len; i++) {
            if (strncmp(s1,s2+i,s1Len)==0)
                return 1;
        }
        return 0;
    }
}

int main() {
    char s1[MAX];
    char s2[MAX];


    gets(s1);
    gets(s2);

    printf("%d", isSubstring(s1, s2));

    return 0;
}