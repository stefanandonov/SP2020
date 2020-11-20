//
// Created by Stefan Andonov on 10/29/20.
//

/*
 * Да се напише програма каде од тастатура
 * ќе се внесе трицифрен цел број. Програмата ќе ја испечати најзначајната и најмалку значајната цифра од бројот
 * 123 -> 1, 3
 * */

#include<stdio.h>
int main () {
    int x;
    scanf("%d", &x);
    printf("Najznacajna cifra e %d, a najmalku znacajna e %d", x/100, x%10);
    return 0;
}
