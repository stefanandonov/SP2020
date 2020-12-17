//
// Created by Stefan Andonov on 12/10/20.
//Write a program that will print all pairs of
// primes up to 1000 that differentiate between themselves for 2.
// At the end print the count.
//
#include<stdio.h>
#include<math.h>
int isPrime(int n) {
    int i;
    if (n < 4) //1,2,3
        return 1;

    for (i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;

    return 1;
}

int main() {
    int i;
    int count = 0;
    for (i = 1; i <= 1000 - 2; i++) {
        if (isPrime(i) && isPrime(i + 2)) {
            printf("%d - %d = 2\n", i + 2, i);
            ++count;
        }
    }
    printf("Count of such numbers: %d", count);

    return 0;
}

