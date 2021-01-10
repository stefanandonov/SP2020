//
// Created by Stefan Andonov on 12/24/20.
//
#define MAX 100

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>


void printSubstring(char string[100], int k, int m) {
    if (k>strlen(string)) {
        printf("Not supported operation");
    } else {
        string+=k; //se pomestuva pointerot string na k-iot karakter od stringot
        char tmp [MAX];
        strncpy(tmp, string, m);
        puts(tmp);
    }

}

int main() {
    char string[MAX];

    gets(string);
    int k,m;
    scanf("%d %d", &k, &m);

    printSubstring (string, k, m);

    return 0;
}