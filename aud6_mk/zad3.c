//
// Created by Stefan Andonov on 11/12/20.
//
#include<stdio.h>
int main () {
    int i, n;
    int vector1[100], vector2[100];
    scanf("%d", &n);

    for (i=0;i<n;i++)
        scanf("%d", &vector1[i]);
    for (i=0;i<n;i++)
        scanf("%d", &vector2[i]);

    int sum = 0;
    for (i=0;i<n;i++)
        sum+=(vector1[i]*vector2[i]);

    printf("%d", sum);

    return 0;
}

