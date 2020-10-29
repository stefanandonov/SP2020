//
// Created by Stefan Andonov on 10/22/20.
//

/* Write a program that for given value of x (during the declaration)
 * will compute and print the value of x^2.
 * */
#include <stdio.h>
#include <math.h>
int main () {
    int x = 5;
    printf("The squared value of %d is %d", x, (int) pow(x,2));
    return 0;
}