//
// Created by Stefan Andonov on 11/12/20.
//

#include<stdio.h>
int main () {
    int n,i,niza[100];
    scanf("%d", &n);
    for (i=0;i<n;i++)
        scanf("%d", &niza[i]);

    int temp = niza[n-1];

    for (i=n-1;i>0;i--)
        niza[i]=niza[i-1];
    niza[0]=temp;

    for (i=0;i<n;i++)
        printf("%d ", niza[i]);

    return 0;
}