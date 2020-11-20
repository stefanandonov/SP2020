//
// Created by Stefan Andonov on 10/29/20.
//

/*
 * Од тастатура се внесуваат координати на една точка од рамнина.
 * Да се напише програма со која ќе се испечати на кој квадрант припаѓа внесената точка.*/

#include<stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

//    if (x == 0 || y == 0) {
//        printf("Ne lezi vo nitu eden kvadrant");
//        return 0;
//    }

    if (x>0 && y>0)
        printf("I");
    else if (x>0 && y<0)
        printf("IV");
    else if (x<0 && y<0)
        printf("III");
    else if (x<0 && y>0)
        printf("II");
    else
        printf("Ne pripagja");

//    if (x!=0 && y!=0) {
//        if (x>0 && y>0)
//            printf("I");
//        else if (x>0 && y<0)
//            printf("IV");
//        else if (x<0 && y<0)
//            printf("III");
//        else
//            printf("II");
//    } else {
//        printf("Ne pripagja");
//    }

//    if (x > 0) {
//        if (y > 0) {
//            printf("I");
//        } else {
//            printf("IV");
//        }
//    } else {
//        if (y > 0) {
//            printf("II");
//        } else {
//            printf("III");
//        }
//    }


    return 0;
}