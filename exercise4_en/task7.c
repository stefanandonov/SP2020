//
// Created by Stefan Andonov on 11/5/20.
//

/*
 * Read from standard input three numbers in arbitrary order.
 * The numbers are lengths of triangle sides. Write a program that will check if triangle can be
 * constructed from given lengths, if so, then should check if the triangle is right
 * triangle and compute its area. On contrary, appropriate messages should be printed.*/

#include<stdio.h>
int main () {
    int a,b,c, temp;
    scanf("%d %d %d", &a, &b, &c);
    if ((a+b<=c) || (a+c<=b) || (b+c<=a)) {
        printf("A triangle with these sides can't be constructed");
    }
    else { //it's okey let's check if it's a right triangle
        if (a>b) {
            temp = a;
            a = b;
            b= temp;
        }
        if (b>c) {
            temp = b;
            b = c;
            c= temp;
        }
        if (a>c) {
            temp = a;
            a = c;
            c= temp;
        }
        if ((a*a + b*b) == c*c) {
            printf("Right triangle");
            printf("Area: %.2f", a*b/2.0);
        }
        else {
            printf("Not a right triangle");
        }
    }

    return 0;
}

