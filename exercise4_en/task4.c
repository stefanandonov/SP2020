//
// Created by Stefan Andonov on 11/5/20.
//

/*
 * Print the grade based on the points */

#include<stdio.h>

int main() {
    int points;
    scanf("%d", &points);
    if (points>=90) printf("10 (A)");
    else if (points>=80) printf("9 (B)");
    else if (points>=70) printf("8 (C)");
    else if (points>=60) printf("7 (D)");
    else if (points>=50) printf("6 (E)");
    else printf("5 (F)");

//    int grade = points / 10 + 1; //49 -> 5; 29 -> 3l 100,101,102 -> 11
//    if (grade < 5)
//        grade = 5;
//    if (grade > 10)
//        grade = 10;


    return 0;
}

