//
// Created by Stefan Andonov on 12/3/20.
//

#include <stdio.h>

int isPrime(int n) {
    int i;
    if (n == 1)
        return 1;

    for (i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

int main() {
    int i, n;
    scanf("%d", &n);

    for (i = n+1;; i++) {
        if (isPrime(i)) {
            printf("%d - %d = %d", i, n, i - n);
            break;
        }
    }
    return 0;
}