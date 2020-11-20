//
// Created by Stefan Andonov on 11/19/20.
//

#include<stdio.h>
int main () {
    int prev, curr,n,m,i,j,diff;
    float coef;
    scanf("%d", &n);
    for (i=0;i<n;i++) {
        scanf("%d", &m);
        int arithmetic = 1, geometric = 1;
        for (j=0;j<m;j++) {
            scanf("%d", &curr);
            if (j==1) {
                diff = curr-prev;
                coef = (float)curr/prev;
            }
            if (j>1) {
                if (curr-prev!=diff)
                    arithmetic=0;
                if (((float)curr/prev)!=coef)
                    geometric=0;
            }
            prev = curr;
        }
        if (arithmetic && geometric) {
            printf("BOTH ARITHMETIC AND GEOMETRIC PROGRESSION\n");
        } else if (arithmetic) {
            printf("ARITHMETIC PROGRESSION\n");
        } else if (geometric) {
            printf("GEOMETRIC PROGRESSION\n");
        } else {
            printf("THE SEQUENCE IS NOT A PROGRESSION\n");
        }
    }
    return 0;
}

