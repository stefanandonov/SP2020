//
// Created by Stefan Andonov on 12/3/20.
//

#include<stdio.h>

int sumaNaPolovini(int i) {
    //1234 -> 12 34
    return i%100 + i/100;
}

int main () {
    int i;
    for (i=1000;i<10000;i++) {
        if (i%sumaNaPolovini(i)==0)
            printf("%d\n", i);
    }
    return 0;
}