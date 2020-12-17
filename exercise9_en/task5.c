//
// Created by Stefan Andonov on 12/10/20.
//

#include <stdio.h>

int sumOfDigits(int n) {
    if (n<10)
        return n;
    else
        return n%10 + sumOfDigits(n/10);

    int sum = 0;
    while (n) { //until n becomes 0
        sum+=n%10; //get the last digit and add it to the sum
        n/=10; //cut the last digit from the number
    }
}

int main () {
    int n;
    scanf("%d", &n);
    printf("Sum of digits: %d", sumOfDigits(n));
    return 0;
}