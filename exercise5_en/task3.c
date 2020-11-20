//
// Created by Stefan Andonov on 11/12/20.
//

/*Write a program that for n numbers read from SI will count the numbers divisible by
3, have residue 1, and have residue 2.*/

#include<stdio.h>
int main () {
    int i, n, number;
    int res0 = 0, res1 = 0, res2 = 0;
    scanf("%d", &n);
    for (i=0;i<n;i++) {
        scanf("%d", &number);
        if (number%3==0) {
            ++res0;
        } else if (number%3 == 1) {
            ++res1;
        } else {
            ++res2;
        }
    }
    printf("%d %d %d", res0, res1, res2);

    return 0;
}