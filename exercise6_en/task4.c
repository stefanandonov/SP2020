//
// Created by Stefan Andonov on 11/18/20.
//

/*
 * Write a program that will check if a given array with n elements read from SI is
ascending, descending or neither. Print the result*/

#include <stdio.h>

int main() {
    int n, i;
    int array[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

//    int counterAscending = 0;
//    int counterDescending = 0;
//    for (i = 0; i < n - 1; i++) {
//        if (array[i] < array[i + 1])
//            ++counterAscending;
//        if (array[i] > array[i + 1])
//            ++counterDescending;
//    }
//    if (counterAscending == (n - 1)) {
//        printf("Ascending");
//    } else if (counterDescending==(n-1)) {
//        printf("Descending");
//    } else {
//        printf("Neither");
//    }

    int ascending = 1, descending = 1;
    for (i = 0; i < n - 1; i++) {
        if (array[i] >= array[i + 1])
            ascending = 0;
        if (array[i] <= array[i + 1])
            descending = 0;
    }

    if (ascending) {
        printf("Ascending");
    } else if (descending) {
        printf("Descending");
    } else {
        printf("Neither");
    }

    return 0;
}
