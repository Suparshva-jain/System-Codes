#include <stdio.h>

int partition(int a[], int lb, int ub){

    int pivot = a[lb];
    int start = lb;
    int end = ub;

    while (start < end) {
    
        while (a[start] <= pivot) 
            start++;
        while (a[end] > pivot) 
            end--;

        if (start < end) {
            int temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }
    }

    int temp = a[lb];
    a[lb] = a[end];
    a[end] = temp;

    return end;    
}

void quick(int a[], int lb, int ub){

    if (lb < ub) {
        int loc = partition(a, lb, ub);
        quick(a, lb, loc-1);
        quick(a, loc+1, ub);

    }
}

int main(){

    int a1[5] = {12,89,0,1,2};

    quick(a1, 0, 4);

    for (int i =0; i < 5; i++) {
        printf("%d ", a1[i]);
    }

}