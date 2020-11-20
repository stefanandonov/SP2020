//
// Created by Stefan Andonov on 11/18/20.
//

/*Од тастатура се внесуваат n петоцифрени броеви.
 * Ako brojot ne e petocifren, pretvorete go vo petocifren taka sto ke gi zemete
 * pette najmalku znacajni cifri.
 * Ваша задача е да ги компресирате броевите и на екран да го отпечатите нивниот збир.
 * Ако добиените броеви се во растечки редослед (секој следен е поголем од претходниот), под збирот отпечатете DA, а во спротивно NE.
Компресијата на секој број се врши на тој начин што од него се отстрануваат втората и четвртата цифра. Така, на пример, 12345 станува 135, 25252 станува 222, 34445 станува 345 итн.
*/

#include<stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int i, niza[100];
    //vcituvanje;
    for (i=0;i<n;i++) {
        scanf("%d", &niza[i]);
        if (niza[i]>99999) {
            niza[i]%=100000;
        }
    }

    //kompresija 12345 -> 135
    int sum = 0;
    for (i=0;i<n;i++) {
        niza[i] = (niza[i]%10 + (niza[i]/100%10)*10 + (niza[i]/10000)*100);
        sum+=niza[i];
    }

    int rastecka = 1;
    for (i=0;i<n-1;i++) {
        if (niza[i]>=niza[i+1])
            rastecka=0;
    }

    for (i=0;i<n;i++) {
        printf("%d ", niza[i]);
    }

    if (rastecka)
        printf("\n%d\nDA", sum);
    else
        printf("\n%d\nNE", sum);
    //printf("%d\n%s", sum, rastecka ? "DA" : "NE");




    return 0;
}



