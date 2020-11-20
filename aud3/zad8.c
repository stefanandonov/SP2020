//
// Created by Stefan Andonov on 10/29/20.
//

/* ddmmyyyy 08011997 --> 08.01
 * */

#include<stdio.h>
int main () {
    int datum;
    scanf("%d", &datum);
    int ddmm = datum/10000; //1801
    int dd = ddmm / 100;
    int mm = ddmm % 100;
    printf("%02d.%02d", dd,mm);
    return 0;
}