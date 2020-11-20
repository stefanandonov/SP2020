//
// Created by Stefan Andonov on 11/12/20.
//

/*Write a program that for N integers read from SI will the difference of the sums of
numbers on odd and even positions (by the order of reading). If this difference is less
than 10 print the message "The two sums are close" else print "The two sums
are far"*/

#include<stdio.h>
#include<math.h>
int main() {
    int i, n, number;
    int sumEven = 0, sumOdd = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &number);
        if (i%2 == 0) { //even position
            sumEven+=number;
        } else {
            sumOdd+=number;
        }
    }

    printf("%.2f\n",fabs(sumOdd-sumEven));
    if (fabs(sumOdd-sumEven) > 10.0)
        printf("The two sums are far");
    else
        printf("The two sums are close");

    return 0;
}

