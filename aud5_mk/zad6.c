//
// Created by Stefan Andonov on 11/5/20.
//

/*Palindromi da se ispecatat vo daden opset*/


#include<stdio.h>
int main () {
    int i,from,to;
    scanf("%d %d", &from, &to);
    for (i=from;i<=to;i++) {
        int obratenBroj = 0;
        int temp = i;
        while (temp!=0) {
            obratenBroj=10*obratenBroj + temp%10;
            temp/=10;
        }
        if (i==obratenBroj)
            printf("%d\n", i);
    }
    return 0;
}


