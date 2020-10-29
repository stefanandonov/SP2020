//
// Created by Stefan Andonov on 10/29/20.
//

/*
 * Write a program that reads character from SI and depending
 * if it is lowercase or uppercase will print 1 or 0 accordingly. WITHOUT IFS*/

#include <stdio.h>

int main () {
    char c;
    scanf("%c", &c);
    int resultLowerCase = c>='a' && c<='z';
    int resultDigit = c>='0' && c<='9';
    int resultNotDigit = c<'0' || c>'9';
    printf("%d %d %d", resultLowerCase, resultDigit, resultNotDigit);

    return 0;
}

