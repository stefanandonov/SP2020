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

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void bubbleSort(int *niza, int n) { //O(N^2)
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (niza[j] > niza[j + 1]) {
//                swap(&niza[j], &niza[j+1]);
                swap(niza + j, niza + j + 1);
            }
        }
    }
}

void selectionSort(int *niza, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) { //shifta pocetokot na sekoja podniza
        int min = niza[i];
        int minIdx = i;
        for (j = i + 1; j < n; j++) {
            if (niza[j] < min) {
                min = niza[j];
                minIdx = j;
            }
        }
        swap(niza + i, niza + minIdx);
    }
}


int main() {
    int i;
    int niza[] = {2, 3, 1, 4, 7, 12, 7, 9, -5, 2, 3, -1, 5, 6, 7, 0, 9};
//    bubbleSort(niza, 17);
    selectionSort(niza, 17);
    printArray(niza, 17);
    return 0;
}