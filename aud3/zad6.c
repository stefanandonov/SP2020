//
// Created by Stefan Andonov on 10/29/20.
//

/*Да се напише програма каде од тастатура ќе се внесе цена на производ,
 * број на рати на кои се исплаќа и камата (каматата е број изразен во проценти од 0 до 100).
 * Програмата треба да го испечати износот на ратата и вкупната сума што ќе се исплати за производот*/

#include<stdio.h>

int main () {
    float cena, kamata;
    int rati;
    scanf("%f %f %d", &cena, &kamata, &rati);
    float vkupnaCena = cena * (1.0 + kamata/100.0);
    float rata = vkupnaCena / rati;
    printf("Vkupnata cena so kamata e %.2f, a edna mesecna rata iznesuva %.2f", vkupnaCena, rata);
    return 0;
}