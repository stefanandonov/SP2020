//
// Created by Stefan Andonov on 12/17/20.
// Write a program that will read two integer and it will swap the
// values of those integer. Do the swapping with a function
//

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("%d %d", a, b);
    return 0;
}

