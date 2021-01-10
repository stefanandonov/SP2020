

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 81

int main() {
    FILE * inputFile = fopen("/Users/stefanandonov/CLionProjects/SP/SP2020_2/aud12_mk/vlezna.txt", "r");
    FILE * outputFile = fopen("/Users/stefanandonov/CLionProjects/SP/SP2020_2/aud12_mk/izlezna.txt", "w");

    char currLine [MAX];
    while (fgets(currLine, MAX, inputFile)!=NULL){
        if (currLine[strlen(currLine)-1]=='\n')
            currLine[strlen(currLine)-1]='\0';
        fprintf(outputFile, "%lu\n%s\n", strlen(currLine), currLine);
    }

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}