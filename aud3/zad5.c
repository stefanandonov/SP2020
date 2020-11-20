//
// Created by Stefan Andonov on 10/29/20.
//

/*
 * Да се напише програма каде од тастатура ќе се внесе цена на производ,
 * а потоа ќе ја испечати неговата цена со пресметан ддв. 18%/5%    % = iznos * procent/ 100 --> 100 * 18 / 100
*/

#include <stdio.h>
int main () {
    int cena;
    scanf("%d", &cena);
    //printf("Cena so DDV iznesuva %.2f", cena + (cena * 18.0/100));
    //printf("Cena so DDV iznesuva %.2f", cena + (cena * 0.18));
    printf("Cena so DDV iznesuva %.2f", cena*1.18);  //(cena * 1.0) + (cena * 0.18) -> cena * (1.0+0.18) -> cena * 1.18
    return 0;
}