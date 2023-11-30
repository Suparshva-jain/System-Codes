#include <stdio.h>

void merge(int a[], int l, int m, int r){
    int i, j, k;
    int n1 = m-l+1;
    int n2 = r-m;

    int L[n1];
    int R[n2];

    for (i = 0; i < n1; i++) {
        L[i] = a[l+i];
    }
    for (j = 0; j < n2; j++) {
        R[j] = a[m+1+i];
    }
     
    i = 0;
    j = 0;
    k = l;


    while (i < n1 & j < n2) {
        if (L[i] < R[j]) {
            a[k] = L[i];
            i++;
            k++;
        }    

        else {
            
            a[k] = R[j];
            j++;
            k++;
        }
    }

    while (i < n1) {
        a[k] = L[i];
            i++;
            k++;
    }

    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }

}


void merge_s(int arr[], int l, int r){
    if (l < r) {
        int m = (l+r)/2;

        merge_s(arr, l, m);
        merge_s(arr, m+1, r);
        merge(arr, l, m,r);
    }
}