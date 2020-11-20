//
// Created by Stefan Andonov on 10/29/20.
//

/*
 * Да се промени претходната програма, така што покрај оценките ќе се испечатат
 * и знаците + и – во зависност од вредноста на последната цифра на поените:*/
// 0,1,2,3 (-) ; 4,5,6 ( ); 7,8,9 (+)
//За оценката 5 не треба да се додава + или –, а за оценката 10 не треба да се додава знакот +.
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

    char znak;
    int poslednaCifra = (int) poeni % 10;

//    if (poslednaCifra<=3)
//        znak = '-';
//    else if (poslednaCifra<=6)
//        znak = ' ';
//    else
//        znak = '+';
//
//    if (ocenka==5 || (ocenka==10 && poslednaCifra>=7))
//        znak = ' ';

    if (ocenka==5) {
        znak = ' ';
    }
    else if (ocenka<10) {
        if (poslednaCifra<=3)
            znak = '-';
        else if (poslednaCifra<=6)
            znak = ' ';
        else
            znak = '+';
    } else {
        if (poslednaCifra<=3)
            znak = '-';
        else if (poslednaCifra<=6)
            znak = ' ';
    }
    printf("%d%c", ocenka, znak);
    return 0;
}