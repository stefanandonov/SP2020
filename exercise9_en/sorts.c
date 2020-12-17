//
// Created by Stefan Andonov on 12/17/20.
//

#include<stdio.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void printArray(int *a, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d%s", a[i], i == n - 1 ? "" : ",");
    }
}

void bubbleSort(int *array, int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

void selectionSort(int *array, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        int min = array[i];
        int minIndex = i;
        for (j = i; j < n; j++) {
            if (array[j] < min) {
                min = array[j];
                minIndex = j;
            }
        }
        swap(&array[i], &array[minIndex]);
    }
}

void insertionSort(int *a, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (a[i]<a[j]) {
                int tmp = a[j];
            }
        }
    }
}

int main() {
    int array[] = {2, 8, 5, 3, 9, 4, 1};
//    bubbleSort(array, 7);
    selectionSort(array, 7);
    printArray(array, 7);
    return 0;
}