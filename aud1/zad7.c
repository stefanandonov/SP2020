#include <stdio.h>

/*
 * Да се напише програма која од СВ ќе прочита два цели
 * броеви и ќе ја испечати на компјутерскиот екран нивната сума,
 * разлика, производ и остатокот при делењето.
 * */
int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %.2f\n", a, b, (float) a / b);
    printf("%d %% %d = %d\n", a, b, a % b);
    return 0;
}
