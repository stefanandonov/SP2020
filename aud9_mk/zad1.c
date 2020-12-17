//
// Created by Stefan Andonov on 12/10/20.
//
#include<stdio.h>
#include<math.h>


int zbirNaPrviKBroevi(int k) { //1+2+3+...+k;
    if (k==1)
        return 1;
    else
        return k + zbirNaPrviKBroevi(k-1);
}

long faktoriel(int n) { //1*2*3*...*(n-1)*n
    if (n==1)
        return 1;
    else
        return n * faktoriel(n-1);
}

long presmetajIzraz(int n) { // 1! + (1+2)! + (1+2+3)! + ... + (1+2+...+n)!
    if (n==1)
        return 1;
    else {
        int zbirotNaPrviIBroevi = zbirNaPrviKBroevi(n);
        long f = faktoriel(zbirotNaPrviIBroevi);
        printf("%d %d %ld\n", n, zbirotNaPrviIBroevi, f);
        return f + presmetajIzraz(n-1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%ld", presmetajIzraz(n));
    return 0;
}