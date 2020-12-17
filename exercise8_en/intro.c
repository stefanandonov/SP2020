//
// Created by Stefan Andonov on 12/3/20.
//
#define MAX 100

#include<stdio.h>
int main () {
    //1. declare a matrix, first 100 is maximum count of ROWS, second 100 is maximum count of COLUMNS
    int matrix [MAX][MAX];

    //2. Read a matrix from SI
    //2.1 Read the dimension(s) of the matrix
    int i,j,m,n; //the real columns and rows count
    scanf("%d%d", &m, &n);
    /* If the matrix is 100% sure that is square
     * int m; //both columns and rows count
     * scanf("%d", &m);
     * */

    //2.2 Read the elements of that matrix
    for (i=0;i<m;i++) { //for rows
        for (j=0;j<n;j++) { //for columns
//            printf("%d %d\n", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    //3. Print a matrix
    for (i=0;i<m;i++) { //for rows
        for (j=0;j<n;j++) { //for columns
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}