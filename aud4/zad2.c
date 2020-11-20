//
// Created by Stefan Andonov on 10/29/20.
//

/*
 * Да се напише програма што проверува дали дадена година што се вчитува
 * од тастатура е престапна или не и на екран печати соодветна порака.*/
//godina deliva so 400 ILI e deliva so 4 no NE I so 100

#include<stdio.h>
int main () {
    int year;
    scanf("%d", &year);

    if ((year%400==0) || (year%4==0 && year%100!=0)) {
        printf("Prestapna e, ne pravi svadba");
    } else {
        printf("Ne e prestapna, pravi svadba");
    }
}

