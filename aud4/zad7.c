//
// Created by Stefan Andonov on 11/5/20.
//

#include<stdio.h>
#include<math.h>
int main() {
    int a, b, c;
    int temp;
    scanf("%d %d %d", &a, &b, &c);

    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a)) {
        //mozeme da napravime triagolnik
        if ((a == b) && (b == c) && (c == a))
            printf("Ramnostran triagolnik\n");
        else if ((a == b) || (b == c) || (c == a))
            printf("Ramnokrak triagolnik\n");
        else {
            printf("Raznostran triagolnik\n");
        }

        double s = (a+b+c)/2.0;
        double area = sqrt(s*(s-b)*(s-a)*(s-c));
        printf("Plostinata na triagolnikot e %.2f", area);
    } else {
        printf("Ne moze da se konstruira triagolnik\n");
    }
}