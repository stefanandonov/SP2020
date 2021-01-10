#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include <stdbool.h>

int countSubstring (char * big, char * small) {
    char * res = strstr(big,small);
    if (res==NULL || *big=='\0')
        return 0;
    else {
        return 1 + countSubstring(res+strlen(small), small);
    }
}


int main() {
    FILE *fp = fopen("/Users/stefanandonov/CLionProjects/SP/SP2020_2/exercise12_en/dat.txt", "r");
    char line[100];
    int counter = 0;
    char word[100];
    scanf("%s", word);

    while (fgets(line, 100, fp) != NULL) {
        counter+=countSubstring(line, word);
    }
    printf("%d", counter);
    fclose(fp);
    return 0;
}