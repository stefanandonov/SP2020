//
// Created by Stefan Andonov on 12/10/20.
//

#include <stdio.h>


int sum (int array [], int n) {
    if (n==0) //sme gi pominale site elementi
        return 0;
    else
        return array[n-1] + sum(array, n-1); //posledniot element + rekurzivna suma na elementite pred nego
}

int max (int array[], int n, int m) {
    if (n==0) //sme gi pominale site elementi vrati go presmetaniot maksimum
        return m;
    else {
        if (array[n-1]>m) {
            m = array[n-1];
        }
        return max (array, n-1, m);
    }
}


int main () {
    int array[100],i,n;
    scanf("%d", &n);
    for (i=0;i<n;i++)
        scanf("%d", &array[i]);

    printf("Sum: %d", sum(array, n));
    printf("Max: %d", max(array, n-1, array[n-1]));

    return 0;
}