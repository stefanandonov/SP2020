//
// Created by Stefan Andonov on 11/18/20.
//

/*
 * Write a program that will compute the scalar product of two vectors with n
coordinates. The number of coordinates n and the coordinates are read from SI. Print
the result on the SO.*/

#include<stdio.h>
#define MAX 100
int main () {
    int i, n;
    int vector1[MAX], vector2[MAX];
    scanf("%d", &n);
    for (i=0;i<n;i++)
        scanf("%d", &vector1[i]);
    for (i=0;i<n;i++)
        scanf("%d", &vector2[i]);

    int dotProduct = 0;
    for (i=0;i<n;i++)
        dotProduct += (vector1[i]*vector2[i]);

    printf("%d", dotProduct);

    return 0;
}