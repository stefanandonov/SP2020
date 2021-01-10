//
// Created by Stefan Andonov on 1/5/21.
//

#include<stdio.h>

int main () {
    int matrix[100][100];
    int result[100][100];
    int i,j,m,n,k,z;
    scanf("%d %d", &m, &n);
    scanf("%d %d", &k, &z);
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    /*
     * 4 4
2 -1
2 4 5 8  --> 2 8 9 0
1 2 3 5      7 8 9 9
2 8 9 0      0 0 0 0
7 8 9 9      0 0 0 0
     * */

    if (k>0) { //shift na redici na dole
        for (i=0;i<m;i++) {
            for (j=0;j<n;j++) {
                if (i<k) {
                    result[i][j]=0;
                } else {
                    result[i][j]=matrix[i-k][j];
                }
            }
        }
    } else if (k<0) { //shift na redici na gore
        for (i=0;i<m;i++) {
            for (j=0;j<n;j++) {
                if (i>=k*(-1)) {
                    result[i][j]=0;
                } else {
                    result[i][j]=matrix[i-k][j];
                }
            }
        }
    }

    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            matrix[i][j]=result[i][j];
        }
    }

    /*
     1 2 3 4                      3 4 0 0
     5 6 7 8 ---(z==-2, z<0)-->   7 8 0 0
     9 1 2 3                      2 3 0 0
     * */

    if (z<0) { //shift na koloni na levo
        for (i=0;i<m;i++) {
            for (j=0;j<n;j++) {
                if (j>=z*(-1)) {
                    result[i][j]=0;
                } else {
                    result[i][j]=matrix[i][j-z];
                }
            }
        }
        /*
     1 2 3 4                      0 0 1 2
     5 6 7 8 ---(z==2, z>0)-->    0 0 5 6
     9 1 2 3                      0 0 9 1
     * */
    } else if (z>0) { //shift na koloni na desno
        for (i=0;i<m;i++) {
            for (j=0;j<n;j++) {
                if (j<z) {
                    result[i][j]=0;
                } else {
                    result[i][j] = matrix[i][j-z];
                }
            }
        }
    }

    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }


    return 0;
}