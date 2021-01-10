
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include <stdbool.h>

int main() {
    FILE *inputFile = fopen("/Users/stefanandonov/CLionProjects/SP/SP2020_2/exercise12_en/mat1.txt", "r");
    FILE *outputFile = fopen("/Users/stefanandonov/CLionProjects/SP/SP2020_2/exercise12_en/mat2.txt", "w");

    int matrix [100][100];
    int m,n,i,j;

    fscanf(inputFile, "%d %d", &m, &n);
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            fscanf(inputFile, "%d", &matrix[i][j]);
        }
    }

    int transposed[100][100];
    for (i=0;i<n;i++) {
        for (j=0;j<m;j++) {
            transposed[i][j]=matrix[j][i];
        }
    }

    for (i=0;i<n;i++) {
        for (j=0;j<m;j++) {
            fprintf(outputFile, "%d ", transposed[i][j]);
        }
        fprintf(outputFile, "\n");
    }


    fclose(inputFile);
    fclose(outputFile);
    return 0;
}