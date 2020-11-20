//
// Created by Stefan Andonov on 11/18/20.
//

/*Edit Test cases
Text:
Да се напише програма која ќе прочита непознат број на природни броеви, и ќе ги испечати сите броеви (во зададениот формат) за кои е задоволен условот: збирот од сите делители на бројот да е еднаков на самиот број.

Напомена: бројот иако се дели сам со себе не се зема во сумата.*/

#include<stdio.h>
int main () {
    int i,broj;

    while(scanf("%d", &broj)) {
        int sumNaDeliteli = 0;
        int posledenDelitel;
        for (i=1;i<=broj/2+1;i++) {
            if (broj%i==0) {
                sumNaDeliteli+=i;
                posledenDelitel=i;
            }
        }
        if (broj==sumNaDeliteli) {
            for (i=1;i<=broj/2+1;i++) {
                if (broj%i==0) {
                    //printf("%d %c ", i, i==posledenDelitel? '=' : '+');
                    if (i!=posledenDelitel)
                        printf("%d + ", i);
                    else
                        printf("%d = ", i);
                }
            }
            printf("%d\n", broj);
        }

    }
    return 0;
}