//
// Created by Stefan Andonov on 1/5/21.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int eSamoglaska(char curr) {
    curr = tolower(curr);
    return curr == 'a' || curr == 'e' || curr == 'u' || curr == 'i' || curr == 'o';
}

int main() {
    FILE *fp = fopen("/Users/stefanandonov/CLionProjects/SP/SP2020_2/aud12_mk/text.txt", "r");

    char curr;
    int samoglaski = 0, soglaski = 0;
    while ((curr = fgetc(fp)) != EOF) {
        if (isalpha(curr)) {
            if (eSamoglaska(curr))
                ++samoglaski;
            else
                ++soglaski;
        }
    }

    printf("Soodnos na samoglaski/soglaski e: %.2f", (float)samoglaski/soglaski);
    return 0;
}