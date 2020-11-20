//
// Created by Stefan Andonov on 11/18/20.
//

/* Write a program that will rotate elements of an array for one place in right.
 * 1 2 3 4 5 -> 5 1 2 3 4
 * */

#include<stdio.h>
int main () {
    int i,n, array[100];
    scanf("%d", &n);
    for (i=0;i<n;i++)
        scanf("%d", &array[i]);

    int temp = array[n-1];
    for (i = n-1; i>0; i--) {
        array[i]=array[i-1];
    }
    array[0] = temp;

    for (i=0;i<n;i++)
        printf("%d ", array[i]);
    return 0;
}