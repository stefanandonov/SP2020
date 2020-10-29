//
// Created by Stefan Andonov on 10/29/20.
//

/*
 *Read a three digit integer from SI.
 * Then print the most significant and least significant digit.
 */

#include<stdio.h> ///123 --> MS 1 (/100), LS 3 (%10)
int main () {
    int x;
    scanf("%d", &x);
    printf("The most significant digit in %d is %d, and the least significant digit is %d", x, x/100, x%10);
    return 0;
}


