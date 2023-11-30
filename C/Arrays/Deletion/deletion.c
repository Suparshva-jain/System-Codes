#include <stdio.h>
int main(){
    
//--------------------------------------------------- PART 1 ----------------------------------------

    int size;
    int no_of_elements;

    printf("Enter the size of the array: ");
    scanf("%d",&size);

    printf("Enter the no of elements to be inserted in array: ");
    scanf("%d", &no_of_elements);

    int array[size];

// Condition checking
    if(no_of_elements <1){
        printf("Can't have an array with 0 or less than 0 elements");
        return 0;
    }
    else if (no_of_elements > size) {
        printf("Can't have elemets more than the size of array");
        return 0;
    }

// If condition is satisfied
    else {
        printf("Enter the elements:\n");
        for (int i =0; i < no_of_elements ; i++) {
            scanf("%d", &array[i]);
        }
    }

// THE ARRAY
    printf("The Array: [ ");
    for (int i =0; i < no_of_elements; i++) {
        printf("%d ", array[i]);
    }

    printf("]\n");

    if (no_of_elements == size) {
        printf("THE ARRAY IS FULL\n");
    }

//--------------------------------------------------- PART 2 ---------------------------------------


// Condition checking for position
    int position;

    printf("Enter the position of the element you want to delete: ");
    scanf("%d", &position);

    if (position <= 0 || position >size) {
        printf("Invalid Position, No element is present there !");
        return 0;
    }
    else if (position >= no_of_elements+1) {
        printf("Valid Position, but no element is present there !");
        return 0;
    }
    else {

// Condition Satisfied, Position present in the given array

// Deletion of the last element
        if (position == no_of_elements) {
            no_of_elements--;

            printf("The Array: [ ");
            for (int i =0; i < no_of_elements; i++) {
            printf("%d ", array[i]);
            }

            printf("]\n");
        }

// Deletion of any element in the array and then rearrangement
        else {
            no_of_elements --;
            for (int i = position-1 ;i <= no_of_elements; i++) {
                array[i] = array[i+1];
            }

            printf("The Array: [ ");
            for (int i =0; i < no_of_elements; i++) {
            printf("%d ", array[i]);
            }

            printf("]\n");   
        }
    }
}
    

