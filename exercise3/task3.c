//
// Created by Stefan Andonov on 10/29/20.
//

#include<stdio.h>

int main() {
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    //int r = (x < y || y < z++);
    int r1 = (x>y && y<z++);
    printf("%d ", r1);
    printf("%d", z);
    return 0;
}

