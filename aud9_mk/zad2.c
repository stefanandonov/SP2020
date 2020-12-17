//
// Created by Stefan Andonov on 12/10/20.
//
#include<stdio.h>
#include<math.h>

int eProst(int number, int i) {
    if (number<4)
        return 1;

    if (number%i==0)
        return 0;

    if (i > sqrt(number))
        return 1;

    return eProst(number,i+1);

}

int najdiSledenProstBroj (int broj) {
    if (eProst(broj,2))
        return broj;
    else
        return najdiSledenProstBroj(broj+1);
}

int main () {
    int i,n;
    scanf("%d", &n);

    int sledenProstBroj = najdiSledenProstBroj(n+1);
    printf("%d - %d = %d", sledenProstBroj, n, sledenProstBroj-n);


    return 0;
}