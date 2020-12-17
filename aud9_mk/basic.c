//
// Created by Stefan Andonov on 12/10/20.
//

#include <stdio.h>
long faktoriel(int n) { //1*2*3*...*(n-1)*n
    int i;
    long proizvod = 1;
    for (i=1;i<=n;i++)
        proizvod*=i;
    return proizvod;
}

int faktorielR (int n, int i) {
    if (i==n)
        return n;
    else
        return i * faktorielR(n, i+1);
}

int faktorielR1 (int n) {
    if (n==1)
        return 1;
    else
        return n * faktorielR1(n-1);
}

int main () {

    printf("%d", faktorielR(5,1));
    return 0;
}