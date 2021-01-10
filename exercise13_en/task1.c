//
// Created by Stefan Andonov on 1/4/21.
//
#include<stdio.h>

void printPercentages(int number, int percent) {
    if (percent>100)
        return ;
    else {
        printf("%d%% = %.2f\n", percent, number/100.0*percent);
        printPercentages(number, percent+5);
    }
}
int main () {
    int number;
    scanf("%d", &number);
    printPercentages(number, 5);
    return 0;
}

