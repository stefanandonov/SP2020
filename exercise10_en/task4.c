//
// Created by Stefan Andonov on 12/17/20.
// Write a program that will read two integer and it will swap the
// values of those integer. Do the swapping with a function
//

#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int *array, int n) {
    int i = 0;
    for (i = 0; i < n; i++)
        printf("%d ", *(array + i));
}

void bubbleSort(int *a, int n) { //O(n^2)
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

void selectionSort(int *a, int n) {
    int i, j;
    for (i = 0; i < n; i++) { //we are shifting and moving the beginning of iterations
        int min = a[i];
        int minIdx = i;
        for (j = i + 1; j < n; j++) { //we are doing one round of iteration to look for min
            if (a[j] < min) {
                min = a[j];
                minIdx = j;
            }
        }
        swap(&a[i], &a[minIdx]);
    }
}

int cmpfunc (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}

int main() {

    int array[] = {2, 8, 5, 3, 9, 4, 1};
    //bubbleSort(array, 7);
//    selectionSort(array,7);
    qsort(array, 7, sizeof(int), cmpfunc); //include stdlib for this function.
    printArray(array, 7);
    return 0;
}

