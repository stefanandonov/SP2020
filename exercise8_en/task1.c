//
// Created by Stefan Andonov on 12/3/20.
//
#include <stdio.h>
int main () {
    int m,n,i,j;
    int matrix[100][100];
    int sumOfOddColumns = 0;
    int sumOfEvenRows = 0;
    scanf("%d%d", &m, &n);
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
           if (i%2==0) {
               sumOfEvenRows+=matrix[i][j];
           }
           if (j%2==1) {
               sumOfOddColumns+=matrix[i][j];
           }
        }
    }

    printf("%d - %d = %d", sumOfOddColumns, sumOfEvenRows, sumOfOddColumns - sumOfEvenRows);

    return 0;
}

