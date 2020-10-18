#include <stdio.h>
#include <math.h>

/*
 * Да се напише програма за пресметување и печатење
 * на плоштината и периметарот на круг.
 * Радиусот на кругот се чита од стандарден влез (тастатура)
 * како децимален број.
 * */
int main() {
    double radius;
    const double PI = 3.14;
    scanf("%lf", &radius);
    double perimetar = 2 * radius * PI;
    double plostina = pow(radius,2) * PI;
    printf ("Perimitarot iznesuva %.5lf, a plostinata iznesuva %.5lf", perimetar, plostina);
    return 0;
}
