//
// Created by Stefan Andonov on 11/19/20.
//

#include<stdio.h>
#include<math.h>

int main() {
    int n;
    int temp, leftReverse, leftHalf, rightHalf, middleDigit, length;
    scanf("%d", &n);

    //1. digit count calculation
    length = 0;
    temp = n;
    while (temp) {
        ++length;
        temp /= 10;
    }

    rightHalf = n % (int) pow(10, length / 2);
    middleDigit = 0;

    if (length % 2 == 0) {
        //2. Splitting left and right halfs
        leftHalf = n / (int) pow(10, length / 2);
    } else { //odd length
        leftHalf = n / (int) pow(10, length / 2 + 1);
        middleDigit = n / (int) pow(10, length / 2) % 10;
    }

    //3. Calculation of the left reverse number
    leftReverse = 0;
    temp = leftHalf;
    while (temp) {
        leftReverse = 10 * leftReverse + temp % 10;
        temp /= 10;
    }

    //4. Addition with modulo 10 digit by digit
    int results = 0;
    int coef = 1;
    while (leftReverse) {
        results += ((leftReverse % 10 + rightHalf % 10) % 10) * coef;
        coef *= 10;
        leftReverse /= 10;
        rightHalf /= 10;
    }

    if (length % 2) {
        results+= (2 * middleDigit)%10 * (int) pow(10,length/2);
    }

    printf("%d", results);

    return 0;
}