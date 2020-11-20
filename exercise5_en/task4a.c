//
// Created by Stefan Andonov on 11/12/20. 1234567
//

#include<stdio.h>
int main () {
    int start,end;
    scanf("%d %d", &start, &end);
    int i = start;

    while (i<end) {
        int mostSignificantDigit;
        int sumOfOtherLeastSignificantDigits = 0;
        int temp = i;
        while (temp>10) {
            sumOfOtherLeastSignificantDigits+=temp%10;
            temp/=10;
        }
        mostSignificantDigit = temp;
        if (mostSignificantDigit == sumOfOtherLeastSignificantDigits)
            printf("%d\n", i);
        ++i;
    }

    return 0;
}