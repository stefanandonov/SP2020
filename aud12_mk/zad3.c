

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100

int main() {
    FILE * inputFile = fopen("/Users/stefanandonov/CLionProjects/SP/SP2020_2/aud12_mk/matrica1.txt", "r");
    FILE * outputFile = fopen("/Users/stefanandonov/CLionProjects/SP/SP2020_2/aud12_mk/matrica2.txt", "w");

    int m,n,i,j;
    int matrix[MAX][MAX];

    fscanf(inputFile, "%d %d", &m, &n);
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            fscanf(inputFile, "%d", &matrix[i][j]);
        }
    }

    int transposed [MAX][MAX];

    for (i=0;i<n;i++){
        for (j=0;j<m;j++) {
            transposed[i][j] = matrix[j][i];
        }
    }

    for (i=0;i<n;i++){
        for (j=0;j<m;j++) {
            fprintf(outputFile, "%d ", transposed[i][j]);
        }
        fprintf(outputFile, "\n");
    }


    fclose(inputFile);
    fclose(outputFile);
    return 0;
}