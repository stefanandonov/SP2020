//
// Created by Stefan Andonov on 12/24/20.
//
#include <stdio.h>
#include<string.h>
#include <stdlib.h>

#define MAX 100
int main () {
    char str1 [MAX];
    char str2 [MAX];

    gets(str1);
    gets(str2);

    //STRCPY
//    strcpy(str1, str2);
//    puts(str1);
//    puts(str2);

    //STRNCPY
//    strncpy(str1,str2,4);
//    str1[4]='\0';

    //STRCAT
    strcat(str1,str2);


    puts(str1);
    puts(str2);

    //atoi parsing of string to integer "123"-->123
    char numberString [MAX];
    gets(numberString);
    printf("%d", atoi(numberString));

    return 0;
}