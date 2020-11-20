//
// Created by Stefan Andonov on 11/12/20.
//

/*
 * Write a program that will print all numbers in given range which are read the same
from left to right and opposite. 12321
 */
#include<stdio.h>
int main () {
    int i,start,end;
    scanf("%d %d", &start, &end);
    for (i=start;i<=end;i++) {
        int reverse = 0;
        int temp = i;
        while (temp) {
            reverse = 10*reverse + temp%10;
            temp/=10;
        }
        if (i == reverse)
            printf("%d\n", i);
    }
}

