//
// Created by Stefan Andonov on 11/5/20.
//

/*
 * 5,6,7,9,10 //+, ,- 7,8,9     5-> shouldn't have +/- 10 -> Shouldn't have +
 *
 * 78,79,77 -> 8+
 * 73, 74,75,76 -> 8
 * 70,71,72 -> 8-
 * */

#include<stdio.h>

int main() {
    int points;
    scanf("%d", &points);
    int grade = 5;
    if (points >= 90) grade = 10;
    else if (points >= 80) grade = 9;
    else if (points >= 70) grade = 8;
    else if (points >= 60) grade = 7;
    else if (points >= 50) grade = 6;

    char sign = ' '; //end digit is 3,4,5,6
    if ((points % 10) < 3) {
        sign = '-';
    } else if ((points%10) > 6) {
        sign = '+';
    }

    if ((grade == 5 && sign!=' ') || (grade==10 && sign=='+'))
        sign=' ';

//    if (sign=='+' && (grade==5 || grade==10))
//        sign=' ';
//    if (sign=='-' && grade==5)
//        sign=' ';

    printf("%d%c", grade, sign);


//    int grade = points / 10 + 1; //49 -> 5; 29 -> 3l 100,101,102 -> 11
//    if (grade < 5)
//        grade = 5;
//    if (grade > 10)
//        grade = 10;


    return 0;
}
