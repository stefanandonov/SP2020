//
// Created by Stefan Andonov on 12/10/20.
//

#include<stdio.h>

int eightOccurrences(int n) {
    if (n==0) {
        return 0;
    } else {
        if (n%10==8) {
            if (n/10%10==8) {
                return 2 + eightOccurrences(n/10);
            }
            else {
                return 1 + eightOccurrences(n/10);
            }
        } else {
            return eightOccurrences(n/10);
        }
    }
}

int main () {
    int n;
    scanf("%d", &n);
    printf("%d", eightOccurrences(n));
    return 0;
}

