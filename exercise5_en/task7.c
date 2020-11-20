//
// Created by Stefan Andonov on 11/12/20.

/*Write a program that for unknown count of integers read from SI will find the
number with maximum value. Numbers larger than 100 should be ignored. The
program stops when the reading of integer fails.*/
#include<stdio.h>
int main () {
    int number, max;
    int flagFirst = 1;
    while (scanf("%d", &number)) {
        if (number>=100)
            continue;

        if (flagFirst) {
            max = number;
            flagFirst = 0;
        }
        if (number>max) {
            max = number;
        }
    }

    printf("%d", max);

    return 0;
}
