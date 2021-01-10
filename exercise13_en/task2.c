//
// Created by Stefan Andonov on 1/4/21.
//
#include<stdio.h>

int sumOfPairsLessThan (int n, int number) {
    if (n<100) { //last pair, base case
        if (n<number)
            return n;
        else return 0;
    } else {
        int pair = n % 100;
        if (pair<number)
            return pair + sumOfPairsLessThan(n/100, number);
        else return sumOfPairsLessThan(n/100, number);
    }
}
int main () {
    int n,number;
    scanf("%d %d", &n, &number);
    printf("%d", sumOfPairsLessThan(n,number));
    return 0;
}

