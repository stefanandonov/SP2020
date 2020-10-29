//
// Created by Stefan Andonov on 10/22/20.
//

/* Write a program that for a given sides of one triangle,
 * it will print the perimeter and area
 * (values are a = 5, b = 7.5, c = 10.2).
 * */

#include<stdio.h>
#include<math.h>
int main() {
    double a = 5;
    double b = 7.5;
    double c = 10.2;
    double perimeter = a + b + c;
    double s = perimeter/2;
    double area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The perimeter is %.2f and the area is %.2f", perimeter, area);
    return 0;
}