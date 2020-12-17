//
// Created by Stefan Andonov on 12/10/20.
//

#include<stdio.h>
#include<math.h>
int eProst(int number) {
    int i;
    if (number < 4) //1,2,3 prosti broevi
        return 1;

    for (i = 2; i <= sqrt(number); i++) {
        if (number % i == 0)
            return 0;
    }

    return 1;
}

int izbrojProstiBroevi (int start, int end)  {
    int i, count = 0;
    for (i=start;i<=end-2;i++) {
        if (eProst(i) && eProst(i+2)) {
            printf("%d - %d = 2\n", i+2, i);
            ++count;
        }
    }
    return count;
}

int main () {
    printf("Imame %d takvi broevi\n", izbrojProstiBroevi(1,1000));
    return 0;
}