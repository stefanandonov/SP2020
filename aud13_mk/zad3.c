#include<stdio.h>

int skratiBroj (int n, int k) { //612345, 3 -> 645
    if (n==0)
        return 0;
    else {
        int cifra = n%10;
        if (cifra>k) {
            return cifra + 10*skratiBroj(n/10,k);
        } else {
            return skratiBroj(n/10,k);
        }
    }
}

int maxOdSkrateni(int pInt[100], int n, int k) {
    int i,max = skratiBroj(pInt[0],k);
    for (i=1;i<n;i++){
        int skraten = skratiBroj(pInt[i],k);
        if (skraten>max) {
            max = skraten;
        }
    }
    return max;
}


int main () {
//    int broj = 612345;
//    int k = 3;
//    printf("%d", skratiBroj(broj,k));
    int i,n;
    int niza [100];
    scanf("%d", &n);
    for (i=0;i<n;i++) {
        scanf("%d", &niza[i]);
    }
    int k;
    scanf("%d", &k);
    printf("%d", maxOdSkrateni(niza, n, k));
    return 0;
}