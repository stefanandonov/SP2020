//
// Created by Stefan Andonov on 1/5/21.
//
#include<ctype.h>
int eSamoglaska(char curr) {
    curr = tolower(curr);
    return curr == 'a' || curr == 'e' || curr == 'u' || curr == 'i' || curr == 'o';
}


int brojSamoglaski (char * str) {
    if (*str=='\0')
        return 0;
    else {
        if (eSamoglaska(*str))
            return 1 + brojSamoglaski(str+1);
        else
            return brojSamoglaski(str+1);
    }
}