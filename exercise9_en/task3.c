//
// Created by Stefan Andonov on 12/10/20.
//

double formula (int n) {
    if (n==1 || n==2)
        return (double) n;
    else
        return ((double)(n-1)/n*1.0) * formula(n-1) + (1.0/n)*formula(n-2);
}

#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);

    printf("%.5lf", formula(n));

    return 0;
}
