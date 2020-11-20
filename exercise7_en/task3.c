//
// Created by Stefan Andonov on 11/19/20.
//
//12345 -> 234 -> 432
// 12345 -> /10 -> reverse(1234) -> 4321 -> %10 -> 432
//first digit ->
#include<stdio.h>

int main() {
    int a, b, i;
    scanf("%d %d", &a, &b);

    for (i = a; i < b; i++) {
        int lastDigit = i % 10; //5
        int reverseNumber = 0;
        int temp = i;
        temp /= 10; //1234
        while (temp) {
            reverseNumber = 10 * reverseNumber + temp % 10;
            temp /= 10;
        } //4321
        int firstDigit = reverseNumber % 10; //1
        int middle = reverseNumber / 10; //432
        int sum = firstDigit + lastDigit;
        if (middle % sum == 0) {
            printf("%d -> (%d == (%d + %d) * %d\n",
                   i, middle, firstDigit, lastDigit, middle/sum);
        }
    }

}

