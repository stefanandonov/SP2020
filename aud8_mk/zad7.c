//
// Created by Stefan Andonov on 12/3/20.
//
#include<stdio.h>
#include<math.h>

int eProst(int number) {
    int i;
    if (number == 1 || number == 2)
        return 1;

    for (i = 2; i <= number/2+1; i++) {
        if (number % i == 0)
            return 0;
    }

    return 1;
}

int sumaNaCifri(int broj) {
    int sum = 0;
    while (broj) {
        sum+=broj%10;
        broj/=10;
    }
    return sum;
}

int main() {

    int i;
    for (i=0;i<10000;i++) {
        if (eProst(i) && eProst(sumaNaCifri(i))) {
            printf("%d\n", i);
        }
    }

    return 0;
}