//
// Created by Stefan Andonov on 11/12/20.
//

#include <stdio.h>
int main () {
    int n, i, niza[100];
    scanf("%d", &n);
    for (i=0;i<n;i++) {
        scanf("%d", &niza[i]);
    }

    int rastecka = 1, opagjacka = 1;

    for (i=0;i<n-1;i++) {
        if (niza[i]<=niza[i+1])
            opagjacka=0;
        if (niza[i]>=niza[i+1])
            rastecka=0;
    }

    if (!rastecka && !opagjacka) {
        printf("Ne e rastecka nitu opagjacka");
    } else if (rastecka) {
        printf("Rastecka niza");
    } else {
        printf("Opagjacka niza");
    }
    return 0;
}

