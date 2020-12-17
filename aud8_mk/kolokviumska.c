//
// Created by Stefan Andonov on 12/3/20.
//

#include <stdio.h>

int najdiMaxCifra(int number) {
    int max = 0;
    int maxPozicija = 0,pozicija = 0;
    while (number) {
        if (number % 10 > max) {
            max = number % 10;
            maxPozicija = pozicija;
        }
        ++pozicija;
        number /= 10;
    }
    return maxPozicija;
}

int najdiPozicijaNaMaxCifra(int number) {
    int maxCifra = najdiMaxCifra(number);
    int pozicija = 0;
    while (number) {
        if (number % 10 == maxCifra) {
            break;
        }
        ++pozicija;
        number /= 10;
    }
    return pozicija;
}

int main() {
    int number;
    int c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    while (scanf("%d", &number)) {
        int pozicija = najdiPozicijaNaMaxCifra(number);
        switch (pozicija) {
            case 0:
                c0++;
                break;
            case 1:
                c1++;
                break;
            case 2:
                c2++;
                break;
            case 3:
                c3++;
                break;
            default:
                c4++;
                break;
        }
    }

    printf("0: %d\n1: %d\n2: %d\n3: %d\n4: %d", c0, c1, c2, c3, c4);
    return 0;
}