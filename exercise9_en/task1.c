//
// Created by Stefan Andonov on 12/10/20.
//
#include<stdio.h>
int sumOfFirstNIterative (int n) {
    int i, sum=0;
    for (i=1;i<=n;i++)
        sum+=i;
    return sum;
}

int sumOfFirstNRecursive (int n, int i) {
    if (i>n)
        return 0;
    else
        return i + sumOfFirstNRecursive(n, i+1);
}

//5 + rec (4)
//    4 + rec (3)
//        3 + rec (2)
//            2 + rec (1)
//                1
//            3
//        6
//    10
//15
int sumOfFirstNRecursive1 (int n) {
    if (n==0 || n==1)
        return n;
    else
        return n + sumOfFirstNRecursive1(n-1);
}

int main () {

    int n = 5;
    printf("%d %d %d", sumOfFirstNIterative(n),
           sumOfFirstNRecursive(n, 0),
           sumOfFirstNRecursive1(n));
    return 0;
}