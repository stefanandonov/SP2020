//
// Created by Stefan Andonov on 12/17/20.
//
#include<stdio.h>
void printArray (int * array, int n) {
    int i=0;
    for (i=0;i<n;i++)
        printf("%d ", *(array+i));
}

int main () {
    int x = 5;
    int * xPtr;
    xPtr = &x;

    printf("%d %d\n", x, *xPtr);

    int array [] = {1,2,3,4,5,6,7};
    printArray(array, 7);
    return 0;
}