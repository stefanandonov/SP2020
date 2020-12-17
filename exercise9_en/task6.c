//
// Created by Stefan Andonov on 12/10/20.
//
#include<stdio.h>
int countEights (int number) {
    if (number==0)
        return 0;
    else {
        int last = number%10;
        int beforeLast = number/10%10;
        if (last==8) {
            if (beforeLast==8) {
                return 2 + countEights(number/10);
            } else {
                return 1 + countEights(number/10);
            }
        } else {
            return countEights(number/10);
        }
    }
}

int main () {
    int n;
    scanf("%d", &n);
    printf("%d", countEights(n));
    return 0;
}

