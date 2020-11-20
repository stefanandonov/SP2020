//
// Created by Stefan Andonov on 10/29/20.
//

/*
 * Да се напише програма со која ќе се отпечати максимумот од два броја чии вредности се читаат од тастатура.*/

#include<stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("Maksimumot e %d", ((a>b) ? a : b));
//    if (a > b) {
//        printf("Maksimumot e %d", a);
//    } else {
//        printf("Maksimumot e %d", b);
//    }
    return 0;
}