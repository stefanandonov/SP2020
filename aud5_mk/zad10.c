//
// Created by Stefan Andonov on 11/12/20.
//

/*Да се напише програма што од непознат број на цели броеви кои се внесуваат
од тастатура ќе ги определи позициите (редните броеви на внесување) на двата
последователни броја што ја имаат најголемата сума. Програмата завршува ако
едно по друго (последователно) се внесат два негативни цели броја*/

#include<stdio.h>

int main() {
    int prev, curr, pozicija = 1, maxS, maxPozicija;
    while (1) {
        scanf("%d", &curr);
        if (pozicija == 1) {
            prev = curr;
            maxS = prev;
            maxPozicija = 1;
        } else {
            if (prev < 0 && curr < 0)
                break;
            if ((prev + curr) > maxS) {
                maxS = prev + curr;
                maxPozicija = pozicija;
            }
        }
        ++pozicija;
        prev = curr;
    }

    printf("%d %d", maxS, maxPozicija);
    return 0;
}