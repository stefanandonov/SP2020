//Write a program that for given textual file text.txt will find the ratio of
//vowel/consonants.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include <stdbool.h>


int hasAtLeastThreeSameLetters(char *word) {
    char c;
    int i;
    for (c = 'a'; c <= 'z'; c++) {
        int counter = 0;
        for (i = 0; i < strlen(word); i++) {
            if (c == tolower(word[i]))
                ++counter;
        }
        if (counter>=3)
            return 1;
    }
    return 0;
}

int main() {
    FILE *fp = fopen("/Users/stefanandonov/CLionProjects/SP/SP2020_2/exercise12_en/words.txt", "r");
    char currWord[21];
    int counter = 0;
    while (fgets(currWord, 21, fp) != NULL) { //TODO check for new line at the end
        if (currWord[strlen(currWord) - 1] == '\n') {
            currWord[strlen(currWord) - 1] = '\0';
        }
        if (hasAtLeastThreeSameLetters(currWord)) {
            printf("%s\n", currWord);
            ++counter;
        }
    }
    printf("Total %d words.", counter);
    fclose(fp);
    return 0;
}