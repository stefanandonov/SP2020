//
// Created by Stefan Andonov on 12/3/20.
//
#include <stdio.h>
#include <math.h>
double diameter (double radius) {
    return 2 * radius;
}

double perimeter (double radius) {
    return diameter(radius) * 3.14;
}

double area (double radius) {
    return pow(radius,2) * 3.14;
}


int main () {
    double radius;
    scanf("%lf", &radius);
    printf("Diameter: %.2f\nPerimeter: %.2f\nArea: %.2f\n",
           diameter(radius),
           perimeter(radius),
           area(radius)
           );

    return 0;
}

