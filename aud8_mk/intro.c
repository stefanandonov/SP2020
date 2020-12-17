//
// Created by Stefan Andonov on 12/3/20.
//

#include<stdio.h>
int main () {
    //1. deklaracija na matrica
    int matrix [100][100];

    //2. vcitame matrica od vlez
    int i,j,m,n; //m-broj na redici, n-broj na koloni
    scanf("%d%d", &m, &n);
    for (i=0;i<m;i++) { //iteriranje po redici
        for (j=0;j<n;j++) { //iteriranje po koloni
            scanf("%d", &matrix[i][j]);
        }
    }

    /* za kvadratna matrica
    int i,j,m; //m-broj na redici, n-broj na koloni
    scanf("%d", &m);
    for (i=0;i<m;i++) { //iteriranje po redici
        for (j=0;j<m;j++) { //iteriranje po koloni
            scanf("%d", &matrix[i][j]);
        }
    }
     * */

    //3. Pecatenje na matrica
    for (i=0;i<m;i++) { //iteriranje po redici
        for (j=0;j<n;j++) { //iteriranje po koloni
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}