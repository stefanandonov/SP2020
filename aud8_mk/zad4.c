//
// Created by Stefan Andonov on 12/3/20.
//
#include <stdio.h>
#include <math.h>
#define PI 3.14
double diameter(double radius) {
    return 2 * radius;
}

double perimeter(double radius) {
    return diameter(radius) * M_PI;
}

double area(double radius) {
    return pow(radius,2) * M_PI;
}

int main() {
    double radius;
    scanf("%lf", &radius);
    printf("Diameter: %.10f\nPerimeter: %.10f\nArea: %.10f",
           diameter(radius),
           perimeter(radius),
           area(radius));
    return 0;
}
