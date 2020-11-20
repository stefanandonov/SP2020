//
// Created by Stefan Andonov on 11/5/20.
//

#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int main() {
    int broj;
    int sumParni = 0, sumNeparni = 0;
    int i = 1;
    while (scanf("%d", &broj)) {
        if (i % 2) {
            sumNeparni += broj;
        } else {
            sumParni += broj;
        }
        ++i;
    }

//    int razlika;
//    if (sumParni>=sumNeparni)
//        razlika = sumParni - sumNeparni;
//    else
//        razlika = sumNeparni - sumParni;

    int razlika = (int) abs(sumParni - sumNeparni);
    printf("%d %d %d\n", sumParni, sumNeparni, razlika);

    if (razlika <= 10)
        printf("Dvete sumi se slicni");
    else
        printf("Dvete sumi mnogu se razlikuvaat");


    return 0;
}