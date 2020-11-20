//
// Created by Stefan Andonov on 11/5/20.
//

/*Write a program that computes на y = x^n for given natural number n, n >= 1 and real number x.*/
// y = x * x * x * .. * x (n times) need the loop to perform those N times

#include<stdio.h>
int main () {
    int i,x,n;
    int y = 1;
    scanf("%d %d", &x, &n);

//    while (n) {
//        y*=x;
//        --n;
//    }
    for (i=1;i<=n;i++) {
        y*=x;
    }
    printf("%d", y);
    return 0;
}