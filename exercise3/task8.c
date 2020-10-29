/*
 * Write a program where from the birth date read from SI (in format ddmmYYYY)
 * would print the month and day of birth.*/

#include<stdio.h> //18011997 dd = fullDate / 1000000, mm = fullDate / 10000 % 100;
int main () {
    int fullDate;
    scanf("%d", &fullDate);
    int ddmm = fullDate / 10000; //1801
    int dd = ddmm / 100; //18
    int mm = ddmm % 100; //01
    printf("%02d.%02d", dd, mm);
    return 0;
}

