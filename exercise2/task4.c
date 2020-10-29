//
// Created by Stefan Andonov on 10/22/20.
//

/*
 * Write a program for computing the arithmetic mean of the numbers 3, 5 and 12.
 * */

#include<stdio.h>

int main() {
    int a = 3, b = 5, c = 12;
    // int/int = i!!! one of them should be double/float by cast or multiply by 1.0
    printf("The average is %.2f", (a + b + c) / 3.0);
    return 0;
}