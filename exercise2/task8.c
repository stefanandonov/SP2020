//
// Created by Stefan Andonov on 10/22/20.
//

/*
 * Write a program that reads uppercase letter from standard input and prints out in lowercase.
 * */

//65-90 A - Z (uppercase)               97-122 (lowercase) a-z
#include<stdio.h>
#include <ctype.h>

int main () {
    char c;
    scanf("%c", &c);
    printf("%c", c + ('a'-'A')); //uppercase to lowercase
    printf("%c", tolower(c));
    //printf("%c", c - ('a'-'A')); //lowercase to uppercase
    return 0;
}
