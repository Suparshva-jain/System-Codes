#include <inttypes.h>
#include <stdio.h>

int main(){

    int ary[5] = {12,5,2,45,90};

    printf("Original Array:  ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ary[i]);
    }

    for (int i = 0; i < 4; i++) {
        int c = 0;
        for (int j = 0; j < 4-i; j++) {
            if (ary[j] < ary[j+1]) {
                int temp = ary[j];
                ary[j] = ary[j+1];
                ary[j+1] = temp;
                c=1;
            }
        }
    
        if (c == 0)
            break;
    }

    printf("\nSorted Array:  ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ary[i]);
    }

}