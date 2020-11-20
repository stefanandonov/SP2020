//
// Created by Stefan Andonov on 11/5/20.
//

#include<stdio.h>

int main () {
    int i, sum=0;
    for (i=11;i<100;i+=2) {
        sum+=i;
        if (i==99)
            printf("%d ", i);
        else
            printf("%d + ", i);
    }
    printf("= %d", sum);
    return 0;
}