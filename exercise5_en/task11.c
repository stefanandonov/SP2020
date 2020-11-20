//
// Created by Stefan Andonov on 11/12/20.
//

#include<stdio.h>
int main () {
    char c;
    scanf("%c", &c);
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'U':
        case 'O':
        case 'I': printf("Vowel"); break;
        case '0': case '1':
        case '2': case '3':
        case '4': case '5':
        case '6': case '7':
        case '8': case '9':
            printf("Digit"); break;
        default:
            printf("Some other character");
    }
    return 0;
}