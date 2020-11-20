//
// Created by Stefan Andonov on 11/5/20.
//

/*
 * Write a program for simple calculator. The program reads two numbers and operator in format:
num1 operator num2 5 + 7
After the operation, depending on the operator, the result should be printed in format:
 num1 operator num2 = result*/

#include<stdio.h>
int main () {
    float a,b; char op;
    scanf("%f %c %f", &a, &op, &b);

    switch (op) {
        case '+':
            printf("%f + %f = %f", a, b, a+b);
            break;
        case '-':
            printf("%f - %f = %f", a, b, a-b); break;
        case '/':
            if (b!=0)
                printf("%f / %f = %f", a, b, a/b);
            else
                printf("Division by zero is not allowed!");
            break;
        case '*':
            printf("%f * %f = %f", a, b, a*b); break;
        default:
            printf("Operation is unknown\n");
    }
    return 0;
}
