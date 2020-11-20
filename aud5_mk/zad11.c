//
// Created by Stefan Andonov on 11/12/20.
//

#include<stdio.h>
int main () {
    int sumNaPolozeniOcenki=0, brojNaPolozeniOcenki=0, brojNaPadnatiPredmeti=0;
    int ocenka;

    while(scanf("%d", &ocenka)){
        switch (ocenka) {
            case 10:
            case 9:
            case 8:
            case 7:
            case 6:
                sumNaPolozeniOcenki+=ocenka;
                brojNaPolozeniOcenki++;
                break;
            case 5:
                brojNaPadnatiPredmeti++;
                break;
            default:
                printf("Nevalidna ocenka\n");
        }
    }

    printf("Prosekot e %.2f. Studentot ima padnato na %d ispiti", 1.0*sumNaPolozeniOcenki/brojNaPolozeniOcenki, brojNaPadnatiPredmeti);

    return 0;
}
