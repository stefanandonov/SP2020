//
// Created by Stefan Andonov on 11/18/20.
//

/*Од стандарден влез се внесува природен број n (9 < n < 5000) и
 * два едноцифрени броја m и k (1 ≤ m ≤ 9,1 ≤ k ≤ 9).
 * Да се напише програма која на стандарден излез ќе ги испечати во растечки редослед (од најмалиот кон најголемиот)
 * сите природни броеви поголеми од n до горната граница за n,
 * во кои цифрата m се појавува точно k пати. Н
 * а крајот, програмата треба да испечати и колку такви броеви има.
 * Во случај ако не постојат броеви што го задоволуваат наведениот услов, да се испечати NEMA.*/

#include<stdio.h>
int main () {
    int i,n,m,k,counter=0;
    int pojavuvanjaNaM = 0;
    scanf("%d %d %d", &n, &m, &k);

    for (i=n;i<=5000;i++) {
        pojavuvanjaNaM = 0; //MORA DA BIDE NOVA VREDNOST ZA SEKOE VRTENJE NA CIKLUSOT !!!!!!11111
        int temp = i;
        while (temp) {
            if (temp%10 == m)
                ++pojavuvanjaNaM;
            temp/=10;
        }
        //printf("%d ", pojavuvanjaNaM);
        if (pojavuvanjaNaM == k) {
            printf("%d\n", i);
            ++counter;
        }
    }

    if (counter==0)
        printf("NEMA");
    else
        printf("%d", counter);

    return 0;
}