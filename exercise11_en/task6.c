//
// Created by Stefan Andonov on 12/24/20.
//
#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define MAX 100

int isValidPassword(char string[100]) {
    if (strlen(string)<8)
        return 0;
    int upperLetters = 0, letters = 0, digits = 0, specialChars = 0;
    int i;
    for (i = 0; i < strlen(string); i++) {
        if (isdigit(string[i]))
            ++digits;
        else if (isalpha(string[i])) {
            ++letters;
            if (isupper(string[i]))
                ++upperLetters;
        }

        else
            ++specialChars;
    }

    return upperLetters!=0 && letters != 0 && digits != 0 && specialChars != 0;

}

int main() {
    char string[MAX];

    gets(string);

    printf("%d\n", isValidPassword(string));


    return 0;
}