#include <stdio.h>
#include <math.h>
/*
 * Да се напише програма која за дадени страни на еден
 * разностран триаголник ќе ги отпечати на екран периметарот
 * и квадратот од плоштината (нека се работи со a = 5,b = 7.5,c = 10.2).
 * */
int main() {
    double a = 5.0, b = 7.5, c=10.2;
    double perimetar = a+b+c;
    printf("Perimetarot na raznostraniot triagolnik e %f\n", perimetar);
    // s = L / 2 ; p = sqrt (s*(s-a)*(s-b)*(s-c))
    float s = perimetar/2;
    float plostina = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Plostinata na raznostraniot triagolnik e %.2f", plostina);
    return 0;
}
