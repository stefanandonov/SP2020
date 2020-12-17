//
// Created by Stefan Andonov on 12/10/20.
//1! + (1 + 2)! + (1 + 2 + 3)! + ... + (1 + 2 + ... + n)!
//

#include<stdio.h>

int sumOfFirstKNumbers(int k) { //5 1,2,3,4,5 -> 15
//    if (k==0 || k==1)
//        return k;
//    else
//        return k + sumOfFirstKNumbers(k-1);
    return k*(k+1)/2;
}

int factorial(int number) { //5! = 1*2*3*4*5
    if (number==1)
        return 1;
    else
        return number * factorial(number-1);
}

int sumOfFactorialsOfSums (int n) {
    if (n==0 || n==1) //base case 0! = 1, 1! = 1
        return 1;
    else {
        int sumOfFirstK = sumOfFirstKNumbers(n);
        int fact = factorial(sumOfFirstK);
        printf("%d %d %d\n", n, sumOfFirstK, fact);
        return fact + sumOfFactorialsOfSums(n-1);
    }
//    int i, sum = 0;
//    for (i=1;i<=n;i++) {
//        int sumOfFirstK = sumOfFirstKNumbers(i);
//        int fact = factorial(sumOfFirstK);
//        printf("%d %d %d\n", i, sumOfFirstK, fact);
//        sum+=fact;
//    }
//    return sum;
}

int main () {
    int n;
    scanf("%d", &n);
    printf("The sum is: %d\n", sumOfFactorialsOfSums(n));
    return 0;
}

