//
// Created by Stefan Andonov on 12/10/20.
//

int gcd (int m,int n) {
    if (m%n==0)
        return n;
    else
        return gcd(n, m%n);
}

#include<stdio.h>
int main () {
    int i,n;
    int array[100];
    scanf("%d", &n);
    for (i=0;i<n;i++)
        scanf("%d", &array[i]);

    int gcdResult = gcd(array[0], array[1]);
    for (i=2;i<n;i++) {
        gcdResult = gcd(gcdResult, array[i]);
    }

    printf("%d", gcdResult);

    return 0;
}

