//
// Created by Stefan Andonov on 12/17/20.
// Write a program that will read two integer and it will swap the
// values of those integer. Do the swapping with a function
//

#include <stdio.h>

int linearSearch(int * a, int n, int key) { //best case - 0, word case n-1 COMPLEXITY O(n)
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == key)
            return i;
    }
    return -1;
}

int binarySearch(int * a, int n, int key) {
    //CONDITION: The array must be sorted in ascending order 1,2,3,4,5,6
    //Best Case: 1 Worst case: log(n)
    int start = 0;
    int end = n-1;
    while (start<=end) {
        int middle = (start + end)/2;
        int middleElement = a[middle];
        if (middleElement==key) {
            return middle;
        } else if (key<middleElement) {
            end = middle-1;
        } else {
            start = middle + 1;
        }
    }
    return -1;
}

int binarySearchRecursive (int * a, int n, int key, int start, int end) {
    if (start>end)
        return -1;
    else {
        int mid = (start+end)/2;
        if (a[mid]==key) {
            return mid;
        } else if (key>a[mid]) {
            return binarySearchRecursive(a, n, key, mid+1, end);
        } else {
            return binarySearchRecursive(a, n, key, start, mid-1);
        }
    }
}

int main() {

    int array [] = {1,2,3,4,5,6,10,15,45,76,77};
    printf("%d", binarySearchRecursive(array, 11, 77, 0, 10));
    return 0;
}

