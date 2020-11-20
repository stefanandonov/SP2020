//
// Created by Stefan Andonov on 11/18/20.
//

/* Write a program that will rotate elements of an array for m places in right
 * 1 2 3 4 5 6 ---(2)---> 5 6 1 2 3 4
 * */

#include<stdio.h>

int main() {
    int i, j, n, array[100];
    int temp[100];
    int m;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);
    scanf("%d", &m);

//    for (i=n-m;i<n;i++) {
//        temp[i-n+m] = array[i];
//    }
    for (i = n - m, j = 0; i < n; i++, j++) {
        temp[j] = array[i];
    }

    for (i = n - 1; i >= m; i--) {
        array[i] = array[i - m];
    }

    for (i = 0; i < m; i++)
        array[i] = temp[i];

    for (i = 0; i < n; i++)
        printf("%d ", array[i]);
    return 0;
}
