#include <stdio.h>

int lr(int ar[], int size, int i, int x){

    if (i == size) 
        return -1;
    
    else if(ar[i] == x)
        return i;
    
    else
        return lr(ar, size, i+1, x);
}


int br(int a[], int left, int right, int x){
    
    if (left > right) 
        return -1;

    int mid = (left+right)/2;

    if (x == a[mid]) 
        return mid;
    
    if (x < a[mid])
        return br(a, left, mid-1, x);
    
    return br(a, mid+1, right, x);
    
}

int main(){

    int a[5]= {23,41,21,4,7};

// Iterative:  ls(a, 5, 23);
// Recursive:  lr(a, 5, 0, 23);

}













