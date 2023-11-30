#include <stdio.h>

void insertion_sort(int a[], int size){
    for(int i = 1; i < size; i++){
        int temp = a[i];
        int j = i - 1;

        while (j >=0 & a[j] > temp) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }

    printf("The Sorted Array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
}

int main(){

    int arr_1[6] = {2,89,1,21,3,4};

    insertion_sort(arr_1, 6);


}