#include <stdio.h>
#include <stdlib.h>


// Function for the Size of Array
int s(){
    int size;
    printf("Enter the Size of the array: ");
    scanf("%d", &size);
    return size;
}


// Function for Insertion of Elements
int in_a(int ary[], int ary_s){
    printf("Enter the elements of the Array: \n");
    for (int i =0; i < ary_s; i++) {
        scanf("%d", &ary[i]);
    }
    return 0;
}


// Function for Printing of Array
int pnt_a(int ary[], int ary_s){
    printf("The array is: [ ");
    for (int i =0; i < ary_s; i++) {
        printf("%d ", ary[i]);
    }
    printf("]");

    return 0;
}


// Linear Search
void ls(int ary[], int ary_s, int e_s){
    int counter = 0;
    for (int i = 0; i < ary_s; i++) {
        if (ary[i] == e_s) {
            printf("Element Found at Index [%d]", i);
            counter++;
            break;
        } 
    }
    if (counter == 0) {
        printf("Element not found");
    }
}



// Binary Search

// Bubble Sort for BS
void sort(int ary[], int ary_s){

    for (int i = 0; i < ary_s-1; i++) {
        int c =0;
        for (int j = 0 ; j < ary_s-1-i; j++) {
            if (ary[j] > ary[j+1]) {
                int temp = ary[j];
                ary[j] = ary[j+1];
                ary[j+1] = temp;
                c=1;
            }
        }
        if (c == 0)
            break;
    }
}
// Binary Search MAIN Algorithm
int bs(int ary[], int ary_s, int e_s){
    sort(ary, ary_s);

    int l = 0;
    int r = ary_s-1;
    

    while (l <= r) {

        int mid =  (l+r)/2;

        if (e_s == ary[mid])
            return mid;
        else if (e_s > ary[mid])
            l = mid+1;
        else
            r = mid-1;

    }
    return -1;
}
// Printing Result for Binary Seach
void bs_result(int x){
    if (x < 0)
        printf("Element not found");
    else 
        printf("ELement found at index [%d]", x);
    
}










int main(){

    // int size = s();
    // int array[size];

    int a1[5] = {23,45,12,1,78};
    sort(a1, 5);
    pnt_a(a1, 5);

    printf("\n");
    bs_result(bs(a1, 5, 45));


    // in_a(array, size);
    // ls(a1, 5, 23);

}
