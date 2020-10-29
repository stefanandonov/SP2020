//
// Created by Stefan Andonov on 10/29/20.
//

/*
 * Write a program where you read from SI
 * price of product, and then will print it’s price
 * with calculated with taxes DDV 18% (5% food & technology) .*/

#include<stdio.h>
int main () {
    int price;
    scanf("%d", &price);  //x * percent / 100
    //double priceWithTax = price + (price * 18.0 / 100.0);
//    double priceWithTax = price + (price * 0.18);
    double priceWithTax = price * 1.18;
    printf("%.2f", priceWithTax);
    return 0;
}
