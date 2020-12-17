//
// Created by Stefan Andonov on 12/3/20.
//

#include<stdio.h>
#include<math.h>

int eProst(int number) {
    int i;
    if (number==1 || number==2)
        return 1;

    for (i=3;i<=(int)sqrt(number)+1;i++) {
        if (number%i==0)
            return 0;
    }

    return 1;

}

int main () {
    int i,n;
    scanf("%d", &n);

    for (i=n+1;;i++) {
        if (eProst(i)) {
            printf("%d - %d = %d", i, n, i-n);
            break;
        }
    }

    return 0;
}