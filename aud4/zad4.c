//
// Created by Stefan Andonov on 10/29/20.
//

/*
 * Да се напише програма што за внесен број на
 * поени од испит ќе генерира соодветна оценка според следната табела:
 * */

#include<stdio.h>

int main() {
    float poeni;
    scanf("%f", &poeni);
    int ocenka = 0;
    if (poeni < 50)
        ocenka = 5;
    else if (poeni < 60)
        ocenka = 6;
    else if (poeni < 70)
        ocenka = 7;
    else if (poeni < 80)
        ocenka = 8;
    else if (poeni < 90)
        ocenka = 9;
    else
        ocenka = 10;

//    if (poeni < 50)
//        ocenka = 5;
//    else if (poeni >=100)
//        ocenka = 10;
//    else
//        ocenka = poeni/10 + 1;

    printf("%d", ocenka);
}