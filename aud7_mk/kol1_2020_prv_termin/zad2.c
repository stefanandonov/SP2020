//
// Created by Stefan Andonov on 11/18/20.
//

/*
 * Да се напише програма за „диплење на број во десно“. Диплење во десно е дефинирано на следниов начин:

Секоја цифра од левата половина на бројот се додава на соодветната спротивна цифра од десната половина на бројот (и се отстранува од бројот) – првата се додава на последната, втората на претпоследната, итн. Собирањето на цифрите се прави модуло 10 така што доколку при собирање на две цифри се добие број поголем од 9, се зема само цифрата на единиците. Доколку бројот има непарен број цифри, средишната цифра се додава самата на себе и не се отстранува (станува прва цифра на новодобиениот број). Да се напише програма која за даден цел број n>=10 ќе го отпечати бројот здиплен во десно. Задачата да се реши без употреба на низи.
 Za doma: zdipleno od desno kon levo da se reshi.
 * */

#include<stdio.h>
#include <math.h>
int main () {
    int n;
    scanf("%d", &n);

    int brojNaCifri = 0;
    //1. broj na cifri na brojot
    int temp = n;
    while (temp) {
        temp/=10;
        ++brojNaCifri;
    }
//    printf("%d", brojNaCifri);

    int desnaPolovina = n % (int) pow(10,brojNaCifri/2);
    int levaPolovina;
    int srednaCifra = 0;
    if (brojNaCifri%2==0)
        levaPolovina = n / pow(10,brojNaCifri/2);
    else {
        levaPolovina = n / pow(10, brojNaCifri / 2 + 1);
        srednaCifra = n / (int) pow(10,brojNaCifri/2) % 10;
    }

    temp = levaPolovina;
    int obratnaLevaPolovina = 0;
    while (temp) {
        obratnaLevaPolovina = 10*obratnaLevaPolovina + temp%10;
        temp/=10;
    }

    int rezultat = 0;
    int koef = 1;
    while(obratnaLevaPolovina) {
        rezultat += ((obratnaLevaPolovina%10 + desnaPolovina%10) % 10) * koef;
        koef*=10;
        obratnaLevaPolovina/=10;
        desnaPolovina/=10;
    }

    if (brojNaCifri%2==1) {
        rezultat += 2 * srednaCifra * (int) pow (10,brojNaCifri/2);
    }

    printf("%d", rezultat);



//    if (brojNaCifri%2==0) { //paren broj na cifri
//        int levaPolovina = n / pow(10,brojNaCifri/2);
//        int desnaPolovina = n % (int) pow(10,brojNaCifri/2);
//
//
//
//        int rezultat = 0;
//        int koef = 1;
//        while(obratnaLevaPolovina) {
//            rezultat += ((obratnaLevaPolovina%10 + desnaPolovina%10) % 10) * koef;
//            koef*=10;
//            obratnaLevaPolovina/=10;
//            desnaPolovina/=10;
//        }
//        printf("%d", rezultat);
//
//    } else { //neparen broj na cifri (igranje so sredna cifra)
//        int levaPolovina = n / (int) pow(10,(brojNaCifri/2) + 1);
//        int srednaCifra = n / (int) pow(10,brojNaCifri/2) % 10;
//        int desnaPolovina = n % (int) pow(10,brojNaCifri/2);
//
//        temp = levaPolovina;
//        int obratnaLevaPolovina = 0;
//        while (temp) {
//            obratnaLevaPolovina = 10 * obratnaLevaPolovina + temp % 10;
//            temp /= 10;
//        }
//
//        int rezultat = 0;
//        int koef = 1;
//        while(obratnaLevaPolovina) {
//            rezultat += ((obratnaLevaPolovina%10 + desnaPolovina%10) % 10) * koef;
//            koef*=10;
//            obratnaLevaPolovina/=10;
//            desnaPolovina/=10;
//        }
//
//
//        printf("%d", rezultat);
//    }

    return 0;
}