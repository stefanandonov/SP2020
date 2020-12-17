//
// Created by Stefan Andonov on 12/17/20.
//

#include<stdio.h>

void swap (int * x, int * y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main () {
    int x,y;
    scanf("%d %d", &x, &y);
    swap(&x,&y);
    printf("%d %d", x, y);
    return 0;
}