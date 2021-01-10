#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAX 100

int eSamoglaska(char curr) {
    curr = tolower(curr);
    return curr == 'a' || curr == 'e' || curr == 'u' || curr == 'i' || curr == 'o';
}

int samoglaskiVoRed(char line[100]) {
    int i, counter = 0;
    for (i = 0; i < strlen(line); i++)
        if (eSamoglaska(line[i]))
            ++counter;
    return counter;
}

int main() {
    FILE *inputFile = fopen("/Users/stefanandonov/CLionProjects/SP/SP2020_2/aud12_mk/SP_primer.txt", "r");
    int vkupnoSamoglaski = 0;
    int redoviSoNad10 = 0;
    char currLine[MAX];
    while (fgets(currLine, MAX, inputFile) != NULL) {
        int rezultat = samoglaskiVoRed(currLine);
        if (rezultat > 10) {
            redoviSoNad10++;
        }
        vkupnoSamoglaski += rezultat;
    }

    printf("Vkupno %d reda imaat povekje od 10 samoglaski.\n"
           "Vo datotekata ima vkupno %d samoglaski.", redoviSoNad10, vkupnoSamoglaski);

    fclose(inputFile);
    return 0;
}