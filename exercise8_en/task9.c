//
// Created by Stefan Andonov on 12/10/20.
//1! + (1 + 2)! + (1 + 2 + 3)! + ... + (1 + 2 + ... + n)!
//

#include<stdio.h>

int sumOfFirstKNumbers(int k) { //5 1,2,3,4,5 -> 15
//    int i, sum = 0;
//    for (i=1;i<=k;i++)
//        sum+=i;
//    return sum;
    return k*(k+1)/2;
}

int factorial(int number) { //5! = 1*2*3*4*5
    int i, prod = 1;
    for (i=1;i<=number;i++)
        prod*=i;
    return prod;
}

int sumOfFactorialsOfSums (int n) {
    int i, sum = 0;
    for (i=1;i<=n;i++) {
        int sumOfFirstK = sumOfFirstKNumbers(i);
        int fact = factorial(sumOfFirstK);
        printf("%d %d %d\n", i, sumOfFirstK, fact);
        sum+=fact;
    }
    return sum;
}

int main () {
    int n;
    scanf("%d", &n);
    printf("The sum is: %d\n", sumOfFactorialsOfSums(n));
    return 0;
}

