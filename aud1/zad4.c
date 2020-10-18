#include <stdio.h>
/* Да се напише програма за
 * пресметување на аритметичката средина на броевите 3, 5 и 12.
 * */
int main() {
    int a = 3, b = 5, c = 12;
    int sum = a + b + c;
    float prosek = sum / 3.0;
    printf("Aritmetickata sredina iznesuva %.2f", prosek);
    return 0;
}
