//
// Created by Stefan Andonov on 12/3/20.
//

int sumOfTheHalves (int i) {
    //1234 -> 12 34
    return i%100 + i/100;
}
#include<stdio.h>
int main () {

    int i;
    for (i=1000;i<=9999;i++) {
        if (i%sumOfTheHalves(i)==0)
            printf("%d\n", i);
    }
    return 0;
}