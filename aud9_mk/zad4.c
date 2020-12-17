//
// Created by Stefan Andonov on 12/10/20.
//

#include<stdio.h>

int sumOfDigits(int n) {
    if (n<10)
        return n;
    else
        return n%10 + sumOfDigits(n/10);

//    int sum = 0;
//    while (n) {
//        sum+=n%10;
//        n/=10;
//    }
//    return sum;
}

int main () {
    int n;
    scanf("%d", &n);
    printf("%d", sumOfDigits(n));
    return 0;
}

