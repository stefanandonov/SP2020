//
// Created by Stefan Andonov on 11/18/20.
//

/*Write a program that for two arrays read from SI will check if they are equal. Print
out the result from the comparison. The maximum size of arrays is 100.
 * */

#include<stdio.h>
int main () {
    int i,n1,n2;
    int array1 [100], array2[100];

    scanf("%d", &n1);
    for (i=0;i<n1;i++) {
        scanf("%d", &array1[i]);
    }

    scanf("%d", &n2);
    for (i=0;i<n2;i++) {
        scanf("%d", &array2[i]);
    }

    if (n1!=n2) {
        printf("Not equal\n");
        return 0;
    }

//    int counter = 0;
//    for (i=0;i<n1;i++) {
//        if (array1[i]==array2[i])
//            ++counter;
//    }
//
//    if (counter==n1) {
//        printf("Equal");
//    } else {
//        printf("Not equal");
//    }

    for (i=0;i<n1;i++) {
        if (array1[i]!=array2[i]) {
            printf("Not equal");
            return 0;
        }
    }
    printf("Equal");

    return 0;
}

