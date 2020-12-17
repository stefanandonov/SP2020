//
// Created by Stefan Andonov on 12/17/20.
// Write a program that will read two integer and it will swap the
// values of those integer. Do the swapping with a function
//

#include <stdio.h>

void printArray(int *array, int n) {
    int i = 0;
    for (i = 0; i < n; i++)
        printf("%d ", *(array + i));
}

void transform(int *a, int n, int *b) {
    // 0, n-1; 1, n-2; 2, n-3 etc etc ---> general form i, n-i-1
    int i;
    for (i = 0; i < n; i++) {
        *(b + i) = *(a + i) + *(a + n - i - 1); // b[i] = a[i] + a[n-i-1];
    }
}

int main() {

    int array[] = {2, 0, 1, 4, 7, 12, 13, 9, 1};
    int array1[9] = {0};
    transform(array, 9, array1);
    printArray(array1, 9);
    return 0;
}

