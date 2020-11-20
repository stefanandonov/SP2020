//
// Created by Stefan Andonov on 11/5/20.
//

/*
 * Write a program that checks if given year read from SI is leap or not and prints out a appropriate message.
 * The year is leap is divisible by 4 and not divisible by 100, or divisible by 400
 * */

#include<stdio.h>
int main () {
    int year;
    scanf("%d", &year);
    if ((year%4==0 && year%100!=0) || year%400==0) {
        printf("YES");
    } else {
        printf("NO");
    }

//     printf("%s", ((year%4==0 && year%100!=0) || year%400==0) ? "YES" : "NO");
    return 0;
}