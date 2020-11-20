//
// Created by Stefan Andonov on 11/18/20.
//

#include<stdio.h>
int main () {
    int i,j,n, array[100];
    int temp[100];
    int m;
    scanf("%d", &n);
    for (i=0;i<n;i++)
        scanf("%d", &array[i]);
    scanf("%d", &m);

    int arrayNew [100];

    for (i=0;i<n;i++) {
        arrayNew [(i+m)%n] = array[i];
    }

    for (i=0;i<n;i++)
        printf("%d ", arrayNew[i]);
    return 0;
}