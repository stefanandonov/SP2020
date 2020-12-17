//
// Created by Stefan Andonov on 12/17/20.
//

#include<stdio.h>

#define MAX 1000000

int linearSearch(int *array, int n, int key) {
    //best case O(1) ako elementot e na pocetok
    //worst case O(n) ako elementot e na kraj
    //Complexity --> O(n)
    int i;
    for (i = 0; i < n; i++) {
        if (array[i] == key)
            return i;
    }
    return -1;
}

int binarySearch(int *array, int n, int key) { //9,10
    //bara nizata array da bide sortirana vo rastecki redosled
    //best case O(1) --> ako key se naogja na sredina
    // worst case O(logn) --> elementot e ili na pocetok ili na kraj
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        int middle = (start + end) / 2;
        if (array[middle] == key)
            return middle;
        else if (key < array[middle]) {
            end = middle - 1;
        } else {
            start = middle + 1;
        }
    }
    return -1;
}

int binarySearchRecursive(int *array, int n, int key, int start, int end) {
    //divide and conquer razdeli pa vladej
    if (start > end)
        return -1;
    int middle = (start + end) / 2;
    if (array[middle] == key)
        return middle;
    else if (key < array[middle])
        return binarySearchRecursive(array, n, key, start, middle - 1);
    else
        return binarySearchRecursive(array, n, key, middle + 1, end);
}

int main() {
    int niza[MAX];

    int i;
    for (i = 1; i <= MAX; i++) {
        niza[i - 1] = i;
    }

//    binarySearch(niza,MAX,991988);
    printf("%d", binarySearchRecursive(niza, MAX, 123456, 0, MAX - 1));
    return 0;
}