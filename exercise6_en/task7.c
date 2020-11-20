//
// Created by Stefan Andonov on 11/18/20.
//

/*
 * Write a program that will remove duplicate from an array. After the transformation
print the array.*/

#include<stdio.h>
int main () {
    int i,j,k,n, array[100];

    scanf("%d", &n);
    for (i=0;i<n;i++)
        scanf("%d", &array[i]);

    for (i=0;i<n;i++) {
        for (j=i+1;j<n;j++) {
            if (array[i]==array[j]) { //duplicate was found
                for (k=j;k<n-1;k++) {
                    array[k]=array[k+1];
                }
                --n;
            }
        }
    }

    for (i=0;i<n;i++)
        printf("%d ", array[i]);

    return 0;
}

