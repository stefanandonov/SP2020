#include <stdio.h>

/*
 * Да се напише програма која ќе ги отпечати на екран
 * остатоците при делењето на бројот 19 со 2, 3, 5 и 8.
 * */
int main() {
    int broj = 19;
    printf("Ostatok pri delenje na %d so broj 2 e broj %d\n", broj, broj%2);
    printf("Ostatok pri delenje na %d so broj 3 e broj %d\n", broj, broj%3);
    printf("Ostatok pri delenje na %d so broj 5 e broj %d\n", broj, broj%5);
    printf("Ostatok pri delenje na %d so broj 8 e broj %d\n", broj, broj%8);
    return 0;
}
