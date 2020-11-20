//
// Created by Stefan Andonov on 11/12/20.
//

#include<stdio.h>
int main () {
    int m,n,i,j,niza[100], novaniza[100];
    scanf("%d", &n);
    for (i=0;i<n;i++)
        scanf("%d", &niza[i]);
    scanf("%d", &m);

   for (i=0;i<n;i++) {
       novaniza[(i+m)%n]=niza[i];
   }
    return 0;
}