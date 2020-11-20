//
// Created by Stefan Andonov on 11/12/20.
//

#include<stdio.h>
int main () {
    int m,n,i,j,niza[100];
    scanf("%d", &n);
    for (i=0;i<n;i++)
        scanf("%d", &niza[i]);
    scanf("%d", &m);

    int temp [100];
    for (i=n-m;i<n;i++) {
        temp[i-n+m]=niza[i];
    }

//    for (j=0;j<m;j++) {
//        temp[j]=niza[n-m+i];
//    }

    for (i=n-1;i>=m;i--) {
        niza[i]=niza[i-m];
    }

    for (i=0;i<m;i++)
        niza[i]=temp[i];

    for (i=0;i<n;i++)
        printf("%d ", niza[i]);
    return 0;
}