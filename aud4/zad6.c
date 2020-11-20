/*Од тастатура се внесуваат должини на три отсечки во произволен редослед.
 * Да се напише програма што
 * 1. ќе провери дали од отсечките може да се конструира триаголник, при што ако може,
 * 2. да се провери дали истиот е правоаголен и
 * 3. да се пресмета неговата плоштина.
 * 4. Во спротивно, треба да се испечатат соодветни пораки.
 * */

#include<stdio.h>

int main() {
    int a, b, c;
    int temp;
    scanf("%d %d %d", &a, &b, &c);

    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a)) {
        //mozeme da napravime triagolnik
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }
        if (a > c) {
            temp = a;
            a = c;
            c = temp;
        }
        if (b > c) {
            temp = b;
            b = c;
            c = temp;
        }
        if ((a * a + b * b) == c * c) {
            printf("Pravoagolen\n");
            printf("Negovata plostina e: %.2f", a*b/2.0);
        }
        else {
            printf("Ne e pravoagolen\n");
        }
    } else {
        printf("Ne moze da se konstruira triagolnik\n");
    }
}
