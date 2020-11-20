//
// Created by Stefan Andonov on 11/12/20.
//

#include<stdio.h>

int main() {
    int i = 1, m1, m2, number;
    while (scanf("%d", &number)) {
        if (i == 1) {
            m1 = m2 = number;
        }

        if (number>m2) {
            m1 = m2;
            m2 = number;
        } else if (number>m1 || i==2) {
            m1 = number;
        }

//        else if (i == 2) {
//            if (number > m2) {
//                m1 = m2;
//                m2 = number;
//            } else {
//                m1 = number;
//            }
//        } else {
//            if (number > m2) {
//                m1 = m2;
//                m2 = number;
//            } else if (number > m1) {
//                m1 = number;
//            }
//        }
        ++i;
    }

    printf("%d %d", m1, m2);
    return 0;
}

