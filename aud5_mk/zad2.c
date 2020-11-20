//
// Created by Stefan Andonov on 11/5/20.
//

/*Да се напише програма за пресметување на y = x^n за даден природен број n, n >= 1 и реален број x.
 * y = x*x*x*x*x*...*x - n-pati
 * pow(x,n)*/

#include<stdio.h>
int main () {
    float x, y=1;
    int n, i;
    scanf("%f %d", &x, &n);
    i = n;
    while (i>0) {
        y*=x;
        --i;
    }
    printf("%.2f ^ %d = %.2f", x, n, y);
    return 0;
}