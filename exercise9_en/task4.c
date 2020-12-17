//
// Created by Stefan Andonov on 12/10/20.
//

#include <stdio.h>
#include <math.h>
int isPrime(int n, int i) {
    if (n < 4) //base condition, 1,2,3 are prime numbers
        return 1;

    if (i*i>n) //base condition, cannot have any divisors  which are > sqrt(n)
        return 1;

    if (n%i==0)
        return 0;
    else
        return isPrime(n, i+1);
}

int main() {
    int i, n;
    scanf("%d", &n);

    for (i = n+1;; i++) {
        if (isPrime(i, 2)) {
            printf("%d - %d = %d", i, n, i - n);
            break;
        }
    }
    return 0;
}