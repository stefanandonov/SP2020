//
// Created by Stefan Andonov on 11/5/20.
//

/*
 * Write a program that will print the maximum of two number read from SI.
 * */
#include<stdio.h>
int main () {
    int a,b;
    scanf("%d %d", &a, &b);
    if (a>b) {
        printf("%d", a);
    } else {
        printf("%d", b);
    }

//    printf("%d", (a>b) ? a : b);

    return 0;
}