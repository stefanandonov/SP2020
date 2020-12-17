//
// Created by Stefan Andonov on 12/3/20.
//

#include<stdio.h>
//Dopolnitelno baranje : Elementite na sporednata dijagonala da se zamenat so sumata na site parnite elementi vo matricata.
// Elementot sto e na dvete dijagonalni neka bide -1
int main() {

    int matrix[100][100];
    int i, j, m;
    scanf("%d", &m);
    int max, min, sumaNaParni = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j]%2==0)
                sumaNaParni+=matrix[i][j];
            if (i==0 && j==0) {
                min = max = matrix[i][j];
            }
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

    int razlika = max - min;
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            if (i==j && i+j==m-1) {
                matrix[i][j]=-1;
            }
            else if (i == j) {
                matrix[i][j] = razlika;
            }
            else if (i+j==m-1) {
                matrix[i][j]=sumaNaParni;
            }
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }



    return 0;
}