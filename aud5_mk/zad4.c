//
// Created by Stefan Andonov on 11/5/20.
//

/*
 * Да се напише програма што на екран ќе ги испечати
 * сите четири-цифрени броеви кај кои збирот на трите најмалку значајни цифри
 * е еднаков со најзначајната цифра.
 * range-ot na nasiot loop/ciklus 1000-9999
 * edinicite = broj%10, desetkite = broj%100/10, stotkite = broj%1000/10 = broj/100%10, iljadarka = broj/1000;
*/

#include<stdio.h>
int main () {
    int i;
    for (i=1000;i<10000;i++) {
        int najznacajna = i/1000;
        int triNajmalkuZnacajni = i%10 + (i%100/10) + (i/100%10);
        if (najznacajna==triNajmalkuZnacajni)
            printf("%d\n", i);
    }
    return 0;
}