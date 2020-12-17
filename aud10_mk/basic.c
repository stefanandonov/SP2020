//
// Created by Stefan Andonov on 12/17/20.
//

#include <stdio.h>
int main () {
    int x = 5;
    int * xPtr; //deklaracija na pointer
    xPtr = &x;

    printf("%d %d\n", x, *xPtr);

    *xPtr = 7;

    printf("%d %d\n", x, *xPtr);

    //Pointers with arrays
    int niza [] = {1,2,4,5,6,7,8}; //niza -> niza[0]

    for (int i=0;i<7;i++) {
        printf("%d ", *(niza+i)); //niza[i]
    }

    printf("%d\n", *niza);


    return 0;
}
