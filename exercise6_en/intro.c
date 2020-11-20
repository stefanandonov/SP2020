//
// Created by Stefan Andonov on 11/18/20.
//
#define MAX 100

#include <stdio.h>

int main() {
    //declaration
    int array[MAX];

    //declaration & initialization
    int array1[] = {1, 2, 3, 4, 5, 6};

    //scanning the elements from the SI
    int i, n;
    scanf("%d", &n);
    for (i=0;i<n;i++) {
        scanf("%d", &array[i]);
    }

    //print the elements from and array to SO
    for (i=0;i<n;i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

