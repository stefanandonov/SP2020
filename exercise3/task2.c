//
// Created by Stefan Andonov on 10/29/20.
//

/*
 * Write a program that reads two integers (x, y) and will print the result of (z) the following expression
 * z = x++ + --y + (x<y)
 * */
#include <stdio.h>
int main () {
    int x,y;
    scanf("%d%d", &x, &y);
    int z = x++ + --y + (x<y);
    int z1 = x++ + --y + x < y; //2 + 0 + 2 < 0 --> 4 < 0 --> 0
    printf("%d %d %d %d", x, y, z, z1);
    return 0;
}