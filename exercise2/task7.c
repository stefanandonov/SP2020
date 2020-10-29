//
// Created by Stefan Andonov on 10/22/20.
//

/*
 * Write a program that reads from standard input two integers and
 * prints their sum, difference, product and division remainder.*/

#include <stdio.h>

int main() {
    int x, y;
    scanf("%d%d", &x, &y);

    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d / %d = %f\n", x, y, 1.0 * x / y);
    printf("%d %% %d = %d\n", x, y, x % y);
    return 0;
}