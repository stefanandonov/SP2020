#include <stdio.h>
#include<math.h>

/*Да се напише програма која за зададена вредност на х (при декларација на
2 променливата) ќе го пресмета и отпечати на екран х^2.
 * */
int main() {
    int x = 6;
    printf("Brojot %d na kvadrat e %d\n", x, x * x);
    printf("Brojot %d na kvadrat e %d", x, (int) pow(x,2));
    return 0;
}
