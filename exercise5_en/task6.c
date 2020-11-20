//
// Created by Stefan Andonov on 11/12/20.
//

#include<stdio.h>
int main () {
    int number, max;
    int flagFirst = 1;
    while (scanf("%d", &number)) {
        if (flagFirst) {
            max = number;
            flagFirst = 0;
        }
        if (number>max) {
            max = number;
        }
    }

    printf("%d", max);

    return 0;
}