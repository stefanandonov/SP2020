//
// Created by Stefan Andonov on 12/3/20.
//

#include<stdio.h>
int main () {
    int matrix[100][100];
    int i, j, m;
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int simetricna = 1;
    for (i = 0; i < m-1; i++) {
        for (j = i+1; j < m; j++) {
            if (matrix[i][j]!=matrix[j][i]) {
                simetricna = 0;
            }
        }
    }

    if (simetricna)
        printf("YES");
    else
        printf("NO");
    return 0;
}