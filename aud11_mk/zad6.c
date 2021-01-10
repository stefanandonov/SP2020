//
// Created by Stefan Andonov on 12/24/20.
//
#define MAX 100

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
//dolzina min 8
int isValid(char password[100]) {
    if (strlen(password)<8)
        return 0;
    int i, upperLetters = 0, letters = 0, digits = 0, specChar = 0;
    for (i = 0; i < strlen(password); i++) {
        if (isalpha(password[i])) {
            ++letters;
            if (isupper(password[i]))
                ++upperLetters;
        }
        else if (isdigit(password[i]))
            ++digits;
        else
            ++specChar;
    }
//    if (letters>0 && digits>0 && specChar>=0)
//        return 1;
//    else
//        return 0; NE VAKA!
    return upperLetters>0 && letters>0 && digits>0 && specChar>=0;
}

int main() {
    char password[MAX];
    gets(password);
    printf("%d\n", isValid(password));
    return 0;
}