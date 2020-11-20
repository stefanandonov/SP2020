//
// Created by Stefan Andonov on 11/12/20.
//

/**Write a program that for unknown count of integers read from SI will find the
positions of the successive numbers with maximum sum. The program stops when
two successive read numbers are negative.*/

#include<stdio.h>
int main () {
    int prev, curr, maxSum, maxPosition, i=1;
    while (scanf("%d", &curr)) {
        if (i==1) {
            prev = curr;
        }

        if (prev<0 && curr<0)
            break;

        if (i==2 || (prev+curr)>maxSum) {
            maxSum = prev+curr;
            maxPosition = i;
        }
//        if (i==2){
//            maxSum = prev+curr;
//            maxPosition = 2;
//        } else {
//            if ((prev+curr) > maxSum) {
//                maxSum = prev+curr;
//                maxPosition = i;
//            }
//        }

        prev = curr;
        ++i;
    }

    printf("%d %d", maxSum, maxPosition);
    return 0;
}