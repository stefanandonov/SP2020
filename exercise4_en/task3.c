//
// Created by Stefan Andonov on 11/5/20.
//

/*The coordinates of a point are read from SI.
 * Write a program that will print out the quadrant or the axis where the point belongs.
 * If the point lays on the origin, print out a appropriate message.
 * */

#include<stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

//    if (x > 0 && y > 0) {
//        printf("I");
//    } else if (x < 0 && y > 0) {
//        printf("II");
//    } else if (x < 0 && y < 0) {
//        printf("III");
//    } else if (x > 0 && y < 0) {
//        printf("IV");
//    } else if (x == 0 && y == 0) {
//        printf("origin");
//    } else if (x == 0) {
//        printf("y-axis");
//    } else {
//        printf("x-axis");
//    }


    if (x == 0 && y == 0) {
        printf("origin");
        return 0;
    } else if (x == 0) {
        printf("y-axis");
        return 0;
    } else if (y == 0) {
        printf("x-axis");
        return 0;
    }

    if (x > 0) {
        if (y > 0) {
            printf("I");
        } else {
            printf("IV");
        }
    } else {
        if (y > 0) {
            printf("II");
        } else {
            printf("III");
        }
    }

}