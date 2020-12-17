//
// Created by Stefan Andonov on 12/3/20.
//

#include<stdio.h>

int main () {
    int matrix [100][100];
    int sumaNaParniRedici = 0, sumaNaNeparniKoloni = 0;
    int i,j,m,n;
    scanf("%d%d", &m, &n);
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    //procesiranje na elementite
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            if (i%2==0) {
                sumaNaParniRedici+=matrix[i][j];
            }
            if (j%2==1) {
                sumaNaNeparniKoloni+=matrix[i][j];
            }
        }
    }

    printf("%d - %d = %d", sumaNaParniRedici, sumaNaNeparniKoloni, sumaNaParniRedici - sumaNaNeparniKoloni);

    return 0;
}