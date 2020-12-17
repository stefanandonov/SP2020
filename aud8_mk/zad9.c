//
// Created by Stefan Andonov on 12/10/20.
//

#include<stdio.h>
#include<math.h>


int zbirNaPrviKBroevi(int k) {
//    int i, sum = 0;
//    for (i=1;i<=k;i++)
//        sum+=i;
//    return sum;
    return k*(k+1)/2;
}

long faktoriel(int n) { //1*2*3*...*(n-1)*n
    int i;
    long proizvod = 1;
    for (i=1;i<=n;i++)
        proizvod*=i;
    return proizvod;
}

long presmetajIzraz(int n) {
    int i;
    long sum = 0;
    for (i = 1; i <= n; i++) {
        int zbirotNaPrviIBroevi = zbirNaPrviKBroevi(i);
        long f = faktoriel(zbirotNaPrviIBroevi);
        printf("%d %d %ld\n", i, zbirotNaPrviIBroevi, f);
        sum+=f;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%ld", presmetajIzraz(n));
    return 0;
}