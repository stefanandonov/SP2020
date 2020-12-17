//
// Created by Stefan Andonov on 12/17/20.
//

#include<stdio.h>

void najdolgaPodniza(int * a, int n, int *length, int *start) {
    int i;
    for (i = 0; i < n; i++) {
        int currLength = 1;
        int currPos = i;
        while (a[i + 1] > a[i]) {
            ++currLength;
            ++i;
            if (i==n-1)
                break;
        }
        if (currLength > *length) {
            *length = currLength;
            *start = currPos;
        }
    }
}

int main() {
    int i;
    int niza[] = {2, 3, 1, 4, 7, 12, 7, 9, 1, 2, 3, 4, 5, 6, 7 ,8, 9};
    int length = 1;
    int start = 0;
    najdolgaPodniza(niza, 17, &length, &start);
    printf("%d %d", length, start);
    return 0;
}