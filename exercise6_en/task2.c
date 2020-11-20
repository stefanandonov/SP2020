//
// Created by Stefan Andonov on 11/18/20.
//

/*Write a program that for an array read from SI, will compute the sum of even
elements, the sum of odd elements and will compute the ratio even/odd.
 * */

#include<stdio.h>

#define MAX 100

int main() {
    int n, i, sumEven = 0, sumOdd = 0, evenCount = 0, oddCount = 0;
    int array[MAX];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++) {
        if (array[i] % 2 == 0) { //even
            sumEven += array[i];
            evenCount++;
        } else { //odd
            sumOdd += array[i];
            oddCount++;
        }
    }

    printf("Sum even: %d\n"
           "Sum odds: %d\n"
           "Ratio: %.2f", sumEven, sumOdd, 1.0* evenCount / oddCount);

    return 0;
}