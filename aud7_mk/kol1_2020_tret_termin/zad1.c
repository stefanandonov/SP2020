//
// Created by Stefan Andonov on 11/18/20.
//

/*Да се напише програма која ќе прочита произволен број на парови од децимални броеви кои претставуваат набавна и продажна цена за одреден продукт. Првиот број од парот е набавна цена, а вториот број продажна цена. За секој пар да се пресмета и испечати добивка или загуба во зависност од цените. Ако продажната цена е поголема од набавната цена станува збор за добивка. Ако продажната цена е помала од набавната цена станува збор за загуба. Во случај на еднакви цени не се печати ништо.*/

#include<stdio.h>
#include<math.h>
int main() {
    double nabavna, prodazna;

    while (scanf("%lf %lf", &nabavna, &prodazna)) {
        double razlika = prodazna - nabavna;
        if (razlika > 0) { //dobivka
            printf("Dobivka: %.2f", razlika);
        }
        if (razlika < 0) { //zaguba
            printf("Zaguba: %.2f", fabs(razlika));
        }
    }
    return 0;
}
