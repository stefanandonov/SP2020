
//Write a program that for given textual file text.txt will find the ratio of
//vowel/consonants.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include <stdbool.h>

int main() {
    FILE *inputFile = fopen("/Users/stefanandonov/CLionProjects/SP/SP2020_2/exercise12_en/input.txt", "r");
    FILE *outputFile = fopen("/Users/stefanandonov/CLionProjects/SP/SP2020_2/exercise12_en/output.txt", "w");

    char currLine[100];
    while (fgets(currLine, 100, inputFile) != NULL) {
        int length = strlen(currLine);
        if (currLine[length-1]=='\n') {
            currLine[length-1]='\0';
            --length;
        }
        fprintf(outputFile, "%d\n%s\n", length, currLine);
    }

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}