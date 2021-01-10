//Write a program that for given textual file text.txt will find the ratio of
//vowel/consonants.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include <stdbool.h>

int isVowel(char current) {
    switch (current) {
        case 'a':
        case 'e':
        case 'u':
        case 'i':
        case 'o':
            return 1;
        default:
            return 0;
    }
}

int main() {
    FILE *fp = fopen("/Users/stefanandonov/CLionProjects/SP/SP2020_2/exercise12_en/text.txt", "r");
    char current;
    int vowels = 0, consonants = 0;
    while ((current = fgetc(fp)) != EOF) {
        if (isalpha(current)) {
            current = tolower(current);
            if (isVowel(current)) {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    fclose(fp);
    printf("Ratio: %.2f", vowels*1.0/consonants);
    return 0;
}