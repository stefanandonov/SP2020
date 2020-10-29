//
// Created by Stefan Andonov on 10/22/20.
//

/*
 *
Write a program for computing and printing the circle area and perimeter.
 The circle radius is read as decimal number.
 * */

#include <math.h>
#include <stdio.h>

int main () {
    double radius;
//    const double PI = 3.14;
    scanf("%lf", &radius);
    double perimeter = 2 * radius * M_PI;
    double area = pow(radius,2) * M_PI; //radius * radius * M_PI;
    printf("The perimeter is %.10f and the area is %.10f", perimeter, area);

    return 0;
}

