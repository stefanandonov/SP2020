//
// Created by Stefan Andonov on 12/17/20.
//

#include<stdio.h>
void elka (int n) {
    int i,j;
    int sreden = n/2+1;
    for (i=1;i<=n/2+1;i++) { //po redovi
        for (j=1;j<=n;j++) { //po koloni
            if (j>=sreden-i && j<=sreden+i) {
                printf("*");
            } else {
                printf(" ");
            }

        }
        printf("\n");
    }
}

int main () {
    int n;
    scanf("%d", &n);
    elka(n);
    return 0;
}