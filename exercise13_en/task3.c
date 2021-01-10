//
// Created by Stefan Andonov on 1/4/21.
//

/**
1,1 left upper d.n = 0,0
left upper d.n
index = [i-1][j-1]
condition = i>0 && j>0

left bottom d.n
index = [i+1][j-1]
condition = j>0 && i<m-1

right upper d.n
index = [i-1][j+1]
condition = j<n-1 && i>0

right bottom d.n
index = [i+1][j+1]
condition = i<m-1 && j<n-1

*/

#include<stdio.h>
int main () {
    int matrix [100][100];
    int result[100][100];
    int i,j,m,n;
    scanf("%d %d", &m, &n);
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i=0;i<m;i++) {
        for (j=0;j<n;j++){
            int maxDiagonal;
            int first = 1;
            if (i>0 && j>0) { //left upper d.n
                if (first) {
                    maxDiagonal = matrix[i-1][j-1];
                    first = 0;
                }
            }
            if (j>0 && i<m-1) { //left bottom d.n
                if (first) {
                    maxDiagonal = matrix[i+1][j-1];
                    first = 0;
                } else if (matrix[i+1][j-1]>maxDiagonal) {
                    maxDiagonal = matrix[i+1][j-1];
                }
            }
            if (j<n-1 && i>0) {
                if (first) {
                    maxDiagonal = matrix[i-1][j+1];
                    first = 0;
                } else if (matrix[i-1][j+1]>maxDiagonal) {
                    maxDiagonal = matrix[i-1][j+1];
                }
            }
            if (i<m-1 && j<n-1) {
                if (first) {
                    maxDiagonal = matrix[i+1][j+1];
                } else if (matrix[i+1][j+1]>maxDiagonal) {
                    maxDiagonal = matrix[i+1][j+1];
                }
            }
            result[i][j]=maxDiagonal;

        }
    }

    for (i=0;i<m;i++) {
        for (j=0;j<n;j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;



}