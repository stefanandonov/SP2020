//
// Created by Stefan Andonov on 11/12/20.
//

#include<stdio.h>

int main() {
    int i;
    int a[100];
    int b[100];
    int size1, size2;

    scanf("%d", &size1);
    for (i = 0; i < size1; i++)
        scanf("%d", &a[i]);

    scanf("%d", &size2);
    for (i = 0; i < size2; i++)
        scanf("%d", &b[i]);

    if (size1 != size2) {
        printf("Ne se ednakvi");
        return 0;
    }

//    int matches = 0;
//    for (i = 0; i < size1; i++)
//        if (a[i] == b[i])
//            ++matches;
//    if (matches == size1) {
//        printf("Ednakvi se");
//    } else {
//        printf("Ne se ednakvi");
//    }

    for (i=0;i<size1;i++) {
        if (a[i]!=b[i]) {
            printf("Ne se ednakvi");
            return 0;
        }
    }

    printf("Ednakvi se");
    return 0;
}
