//
// Created by Stefan Andonov on 12/3/20.
//

#include<stdio.h>

int findMaxDigit(int n) {
    int max = 0;
    while (n) {
        if (n % 10 > max) {
            max = n % 10;
        }
        n /= 10;
    }
    return max;
}

int findFirstOccurrenceOfMaxDigit(int n) {
    int max = findMaxDigit(n);
    int i = 0;
    while (n) {
        if (n%10==max)
            break;
        n/=10;
        ++i;
    }
    return i;
}

void printArray (int counters []) {
    int i;
    for (i=0;i<5;i++)
        printf("%d: %d\n", i, counters[i]);
}

int main() {
    int number;
    int counters [5] = {};
    while (scanf("%d", &number)) {
        counters[findFirstOccurrenceOfMaxDigit(number)]++;
    }

    printArray(counters);

    return 0;
}