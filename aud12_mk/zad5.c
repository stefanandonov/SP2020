#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAX 100

int checkConditionIvan(char word[100]) {
    int i, j;
    for (i = 0; i < strlen(word); i++) {
        int counterPerLetter = 0;
        for (j = 0; j < strlen(word); j++) {
            if (i!=j && tolower(word[i])==tolower(word[j]))
                counterPerLetter++;
        }
        if (counterPerLetter>=2)
            return 1;
    }
    return 0;
}

int checkCondition(char word[100]) {
    char c;
    int i;
    for (c = 'a'; c <= 'z'; c++) {
        int counter = 0;
        for (i = 0; i < strlen(word); i++) {
            if (tolower(word[i]) == c)
                ++counter;
        }
        if (counter >= 3)
            return 1;
    }
    return 0;
}

int main() {
    FILE *inputFile = fopen("/Users/stefanandonov/CLionProjects/SP/SP2020_2/aud12_mk/zborovi.txt", "r");
    int counter = 0;
    char currWord[MAX];
    while (fgets(currWord, MAX, inputFile) != NULL) {
        if (checkCondition(currWord)) {
            printf("%s", currWord);
            ++counter;
        }
    }

    printf("\nVkupno %d zborovi.", counter);

    fclose(inputFile);
    return 0;
}