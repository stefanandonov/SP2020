//
// Created by Stefan Andonov on 11/5/20.
//

/*
 * Да се напише програма што од n броеви (внесени од тастатура)
 * ќе го определи бројот на броеви што се деливи со 3,
 * при делењето со 3 имаат остаток 1, односно 2.*/
//da se vratime na zadacava otkako ke ucime nizi i da raboti za bilo koj broj ne samo za 3
#include<stdio.h>

int main() {
    int i, n, broj, ostatok0 = 0, ostatok1 = 0, ostatok2 = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &broj);
        if (broj % 3 == 0)
            ++ostatok0;
        else if (broj % 3 == 1)
            ++ostatok1;
        else
            ++ostatok2;
    }
    printf("%d %d %d", ostatok0, ostatok1, ostatok2);
    return 0;
}