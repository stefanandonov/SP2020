//
// Created by Stefan Andonov on 12/17/20.
//

#include<stdio.h>

void printArray(int *pInt, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", *(pInt + i));
    }
}

void transform(int *array, int n, int *res) {
    int i;
    for (i = 0; i < n; i++) {
        res[i] = array[i] + array[n - i - 1];
        //*(res+i) = *(array+i) + *(array+n-i-1);
    }
}

int main() {
    int i;
    int niza[] = {2, 3, 1, 4, 7, 12, 7, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int rezultat[17] = {0};
    transform(niza, 17, rezultat);
    printArray(rezultat, 17);
    return 0;
}