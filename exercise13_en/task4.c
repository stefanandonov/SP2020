//
// Created by Stefan Andonov on 1/4/21.
//

#include<stdio.h>
int main () {
    int matrix [100][100];
    int result[100];
    int counter = 0;
    int i,j,k,m,n;
    scanf("%d %d", &m, &n);
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i=0;i<m;i++) {
        for (j=0;j<n;j++){
            int flag = 1;
            for (k=0;k<n;k++) { // 1 2 2 3 4 5
                if (j!=k && matrix[i][j]==matrix[i][k]) {
                    flag = 0;
                    break;
                }
            }
            if (flag==1) {
                result[counter] = matrix[i][j];
                counter++;
            }
        }
    }

    for (i=0;i<counter;i++) {
        printf("%d ", result[i]);
    }

    return 0;



}