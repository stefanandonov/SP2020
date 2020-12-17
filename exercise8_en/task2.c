//
// Created by Stefan Andonov on 12/3/20.
//


//put the diff max - min on the main diagonal
//put the sum of the whole matrix on the anti diagonal
#include <stdio.h>

int main() {
    int m, i, j;
    int matrix[100][100];
    int sum = 0;
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
            sum+=matrix[i][j];
        }
    }

    int max = matrix[0][0];
    int min = matrix[0][0];

    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            if (matrix[i][j]>max) {
                max = matrix[i][j];
            }
            if (matrix[i][j]<min) {
                min = matrix[i][j];
            }
        }
    }
    //Processing of the data
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            if (i==j && i+j==m-1) {
                matrix[i][j] = 0;
            }
            else if (i==j) { //access the element on the main diagonal
                matrix[i][j]=max-min;
            }
            else if (i+j==(m-1)) {//access the antidiagonal
                matrix[i][j]=sum;
            }
        }
    }
    //Printing the results
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }




    return 0;
}