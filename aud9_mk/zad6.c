//
// Created by Stefan Andonov on 12/10/20.
//

#include <stdio.h>

int gcd (int m, int n) {
    if (m%n==0)
        return n;
    else
        return gcd (n, m%n);
}

int gcdForArray (int array [], int n) {
    /*
     * gcd (84, gcdA(niza,4))
     *          gcd(72, gcdA(niza,3))
     *                  gcd(120, gcd(niza,2))
     *                           12
     *                  12
     *          12
     * 12
     * */
    if (n==2)
        return gcd(array[0], array[1]);
    else
        return gcd(array[n-1], gcdForArray(array, n-1));
}

int main () {
    int array[100],i,n;
    scanf("%d", &n);
    for (i=0;i<n;i++)
        scanf("%d", &array[i]);

//    int gcdResult = gcd(array[0], array[1]);
//
//    for (i=2;i<n;i++) {
//        gcdResult = gcd(gcdResult, array[i]);
//    }

    printf("%d", gcdForArray(array, n));
    return 0;
}