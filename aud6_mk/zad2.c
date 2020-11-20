//
// Created by Stefan Andonov on 11/12/20.
//

#include<stdio.h>
int main () {
    int i,sumParni = 0, sumNeparni = 0, countParni = 0, countNeparni = 0, n;
    int niza [100];
    scanf("%d", &n);
    for (i=0;i<n;i++) {
        scanf("%d", &niza[i]);
    }

    for (i=0;i<n;i++) {
        if (niza[i]%2==0) {
            sumParni+=niza[i];
            countParni++;
        } else {
            sumNeparni+=niza[i];
            countNeparni++;
        }
    }

    printf("Suma parni: %d\n"
           "Suma neparni: %d\n"
           "Odnos: %.2f", sumParni, sumNeparni, countParni*1.0/countNeparni);
    return 0;
}