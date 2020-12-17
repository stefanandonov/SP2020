//
// Created by Stefan Andonov on 12/3/20.
//

//
// Created by Stefan Andonov on 12/3/20.
//


//put the diff max - min on the main diagonal
//put the sum of the whole matrix on the anti diagonal
#include <stdio.h>

int main() {
    int m, i, j;
    int matrix[100][100];
    int symmetrical = 1;

    //Reading of the matrix
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    //Processing of the data
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            if (j>i) { //access the upper triangle
                if (matrix[i][j]!=matrix[j][i]) {
                    symmetrical=0;
                    break;
                }
            }
        }
        if (!symmetrical) //save resources do not go on the next row because there is no chance that the matrix is symmetrical
            break;
    }


    printf("%s", symmetrical ? "YES" : "NO");


    return 0;
}