//
// Created by Stefan Andonov on 11/12/20.
//
#include<stdio.h>
int main () {
    //1. deklaracija
    int niza [100];

    //2. inicijalizacija
    int niza1 [] = {1,2,3,4,5};

    //3. vcituvanje na niza od standarden vlez
    int i,n;
    scanf("%d", &n);
    for (i=0;i<n;i++) {
        scanf("%d", &niza[i]);
    }

    //4. pecatenjeto na niza
    for (i=0;i<n;i++) {
        printf("%d ", niza[i]);
    }
}