//
// Created by Stefan Andonov on 1/5/21.
//


#include<stdio.h>

int sumaParoviCifriPogolemiOd(int n, int broj) {
    if (n==0)
        return 0;
    else {
        int par = n%100;
        if (par<=broj) {
            return sumaParoviCifriPogolemiOd(n/100, broj);
        } else {
            return par + sumaParoviCifriPogolemiOd(n/100, broj);
        }
    }
}

int main () {
    int n,broj;
    scanf("%d %d", &n, &broj);
    printf("%d", sumaParoviCifriPogolemiOd(n,broj));
    return 0;
}