//
// Created by Stefan Andonov on 11/5/20.
//

/**Write a program that computes the sum of all odd two-digit numbers. Print the result on standard output in the following format:
 * 11 + 13 + 15 + 17 + ... + 97 + 99 = 2475
 */

#include<stdio.h>
int main () {
    int i,sum=0;
    for (i=10;i<100;i++) {
        if (i%2!=0) {
            if (i!=99)
                printf("%d + ", i);
            else
                printf("%d", i);
            sum+=i;
        }
    }

    printf("= %d", sum);
    return 0;
}