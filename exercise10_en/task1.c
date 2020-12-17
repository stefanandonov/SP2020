//
// Created by Stefan Andonov on 12/17/20.
// Write a program that will read two integer and it will swap the
// values of those integer. Do the swapping with a function
//

#include <stdio.h>

void findLargestIncreasingSubarray(int *array, int n, int *start, int *length) {
    int i;

    for (i = 0; i < n-1; i++) {
        int currStart = i;
        int currLength = 1;
        while (array[i] < array[i+1]) {
            ++currLength;
            ++i;
            if (i==n-1)
                break;
        }
        if (currLength > *length) {
            *length = currLength;
            *start = currStart;
        }
    }
}

int main() {

    int array[] = {2, 0, 1, 4, 7, 12, 13, 9, 1};
    int start = 0;
    int length = 1;
    findLargestIncreasingSubarray(array, 9, &start, &length);
    printf("%d %d", start, length);
    return 0;
}

