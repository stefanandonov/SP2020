//
// Created by Stefan Andonov on 12/10/20.
//
#include<stdio.h>

int min (int array [100], int n) {
    if (n==1) {
        return array[0];
    } else {
        int minn = min(array, n-1);
        if (array[n-1]<minn)
            return array[n-1];
        else
            return minn;
    }
}

int min1 (int array [100], int n, int min) {
    if (n==0)
        return min;
    else {
        if (array[n-1]<min) {
            return min1(array, n-1, array[n-1]);
        } else
            return min1(array, n-1, min);
    }
}

/*
 * Александар Радуловски(201518)
1:57 PM
i can

Ко
Константина Сарваноска(201519)
1:57 PM
I volunteer too

Са
Сара Вукелиќ(201504)
1:57 PM
I can help out

Ол
Оливер Андоновиќ(201550)
1:57 PM
me too!*/

int main () {
    int i,n;
    int array[100];
    scanf("%d", &n);
    for (i=0;i<n;i++)
        scanf("%d", &array[i]);

    printf("%d", min1(array,n, array[0]));
    return 0;
}