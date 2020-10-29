//
// Created by Stefan Andonov on 10/22/20.
//

/*
 * Write a program that will compute the value of the mathematical expression: x = 3/2 + (5 – 46*5/12)
 * */

#include <stdio.h>

int main (){
    //double x = (double)3/2 + (5 - (float)46*5/12); //with cast
    double x = 3.0/2 + (5 - 46.0*5/12);
    //3/2 + (5 - 230/12)
    //3/2 + (5 - 19)
    //3/2 - 14
    //1 - 14 ---> -13
    printf("The result is %.20f", x);
    return 0;
}