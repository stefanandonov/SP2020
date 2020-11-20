//
// Created by Stefan Andonov on 11/12/20.
//

/*
 * Write a program that will print all 4-digit numbers (1000-9999) in which the sum of the three least
significant digits is equal to the most significant digit.
 4031 = 4 == 4 should be printed
 * */
#include<stdio.h>
int main () {
    int i = 1000;

    while (i<10000) {
        int mostSignificantDigit = i / 1000;
        int sumOfTreeLeastSignificantDigits = i%10 + i/10%10 + i/100%10;
        if (mostSignificantDigit == sumOfTreeLeastSignificantDigits)
            printf("%d\n", i);
        ++i;
    }

    return 0;
}

