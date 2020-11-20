//
// Created by Stefan Andonov on 11/19/20.
//

/*
 * Two numbers M and N, where N > M > 10 are read from the standard input.
 * Your task is to find all odd numbers between M and N, without М and N,
 * which are divisible by the sum of their two least significant digits.
 * 145 -> 9*/

#include<stdio.h>
int main () {
    int m,n,i;
    scanf("%d %d", &m, &n);

    for (i=m+1;i<n;i++) {
        int sumLeastSignDigits = (i%10) + ((i/10)%10);
        if (i%2) {
            if ((i % sumLeastSignDigits) == 0) {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}

