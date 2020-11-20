//
// Created by Stefan Andonov on 11/5/20.
//

//Write a program that computes the sum of
// all even two-digit numbers. Print the result on standard output 10-99

#include<stdio.h>
int main () {

    int i;
    int sum = 0;
    for (i=10;i<=99;i++) {
        if (i%2==0) {
            sum += i;
            //printf("Even number: %d\n", i);
        }
    }
    printf("Sum is:%d", sum);

    return 0;
}