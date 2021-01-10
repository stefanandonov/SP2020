//
// Created by Stefan Andonov on 1/5/21.
//

#include<stdio.h>

int main () {
    int A[100][100];
    int counter = 0;
    int i,j,m,n;
    scanf("%d %d", &m, &n);

    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (i=1;i<m-1;i++) {
        for (j=1;j<n-1;j++) {
            int sosed = A[i-1][j-1];
            if (sosed==A[i][j-1] && sosed==A[i][j+1] && sosed==A[i-1][j]
            && sosed==A[i-1][j+1] && sosed==A[i+1][j+1] && sosed==A[i+1][j] && sosed==A[i+1][j-1]) {
                ++counter;
            }
        }
    }
    printf("%d", counter);
    return 0;
}