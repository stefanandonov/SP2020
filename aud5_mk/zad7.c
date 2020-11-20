//
// Created by Stefan Andonov on 11/5/20.
//

#include<stdio.h>

int main() {
    int broj, max;
    int flag = 1;
    while (scanf("%d", &broj)) {

        if (broj >= 100)
            continue;

        if (flag) {
            max = broj;
            flag = 0;
        }

        if (broj > max) {
            max = broj;
        }


    }
    printf("%d", max);
    return 0;
}
