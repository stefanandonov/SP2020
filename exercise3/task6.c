//
// Created by Stefan Andonov on 10/29/20.
//

/*
 * Write a program where you read from SI price of product,
 * number of installments and interest rate (percents from 0 to 100).
 * The program should output the amount of the installment and total price
 * including the interest.*/

#include <stdio.h>
int main () {
    float price, interest;
    int installments;

    scanf("%f %f", &price, &interest);
    scanf("%d", &installments);

    float amount = price * (1 + interest/100.0);
    printf("The installment amount is %.5f", amount/installments);
    return 0;
}

