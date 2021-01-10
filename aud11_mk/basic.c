//
// Created by Stefan Andonov on 12/24/20.
//
#define MAX 100
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main () {
    char string [MAX];
    char results [MAX];
    char results1 [MAX];
    gets(string); //chita do nov red
    //scanf("%s", string); //cita do prazno mesto
    puts(string);
    printf("%s\n", string);

    strcpy(results, string);
    puts(results);
//    puts(string);

    strncpy(results1, string, 4);
    puts(results1);

    strcat(results1, results);
    puts(results1);

    //atoi test za parsiranje na text vo broj
    char number[MAX];
    gets(number); //"123"
    printf("%d", atoi(number));




}