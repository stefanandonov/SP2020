//
// Created by Stefan Andonov on 11/5/20.
//

// 5.1 + 6
// 5 + 6 = 11

#include<stdio.h>
int main () {
    float a,b;
    char operator;
    scanf("%f %c %f", &a, &operator, &b);

    switch (operator) {
        case '+':
            printf("%.2f + %.2f = %.2f\n",a, b, a+b); break;
        case '-':
            printf("%.2f - %.2f = %.2f\n",a, b, a-b); break;
        case '/':
            printf("%.2f / %.2f = %.2f\n",a, b, a/b); break;
        case '*':
            printf("%.2f * %.2f = %.2f\n",a, b, a*b); break;
        default:
            printf("Greska operator\n");

    }
}

