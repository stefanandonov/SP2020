//Write a program that for given textual file text.txt will find the ratio of
//vowel/consonants.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include <stdbool.h>

int isVowel(char current) {
    current = tolower(current);
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

int countVowelsInString( char * line) {
    int count = 0;
    while (*line!='\0') {
        if (isalpha(*line) && isVowel(*line))
            ++count;
        ++line;
    }
    return count;
}

int main() {
    FILE *fp = fopen("/Users/stefanandonov/CLionProjects/SP/SP2020_2/exercise12_en/SP_example.txt", "r");
    int vowels = 0;
    int linesWithVowels = 0;
    char currLine [100];

    while (fgets(currLine, 100, fp)!=NULL) {
        int vowelsPerLine = countVowelsInString(currLine);
        vowels += vowelsPerLine;
        if (vowelsPerLine>=10)
            ++linesWithVowels;
    }

    printf("Total %d rows have more than 10 vowels.\n"
           "The file has total %d vowels.", linesWithVowels, vowels);
    fclose(fp);

    return 0;
}