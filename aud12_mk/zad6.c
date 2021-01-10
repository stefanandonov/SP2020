#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAX 100

int findOccurrence(char line[100], char word[10]) {
    char * result = strstr(line, word);
    if (result==NULL)
        return 0;
    else {
        return 1 + findOccurrence(result+strlen(word), word);
    }
}

int main() {
    FILE *inputFile = fopen("/Users/stefanandonov/CLionProjects/SP/SP2020_2/aud12_mk/dat.txt", "r");
    int counter = 0;
    char currLine[MAX];
    char word[10];
    scanf("%s", word);
    while (fgets(currLine, MAX, inputFile) != NULL) {
        counter+=findOccurrence(currLine, word);
    }

    printf("%d", counter);
    fclose(inputFile);
    return 0;
}