#include <stdio.h>
int main(){

//--------------------------------------------------- PART 1 ----------------------------------------

    int size;
    int no_of_elements;

    printf("Enter the Size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("How many elements do you want to insert: ");
    scanf("%d", &no_of_elements);

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
        printf("Enter the Elements of the arrays: \n");
        for (int i =0; i < no_of_elements; i++) {
            scanf("%d", &array[i]);
        }
    }

// THE ARRAY
    printf("The Array: [ ");
    for (int i =0; i < no_of_elements; i++) {
        printf("%d ", array[i]);
    }

    printf("]\n");

    

//--------------------------------------------------- PART 2 ----------------------------------------



// Condition checking for the new element position
    if (no_of_elements == size) {
        printf("Array is now full");
        return 0;
    }
    else {
        int position;

        printf("Enter the position at which element is to be inserted: ");
        scanf("%d", &position);

        int index = position-1;


        if (position <= 0 || index > size) {
            printf("Position out of bound");
            return 0;
        }
        else if (position > no_of_elements+1) {
            printf("Array Inbound But the position is Invalid");
            return 0;
        }
        else {


// Condition is Satisfied, Now Insertion of the element
            int element;

            printf("What element do u want to insert: ");
            scanf("%d", &element);


// Inserting at the beginning
            if (position == 1) {
                for (int i = no_of_elements+1; i > 0; i--) {
                    array[i] = array[i-1]; 
                }
                array[0] = element;
                no_of_elements++;

                printf("The Array: [ ");
                for (int i =0; i < no_of_elements; i++) {
                    printf("%d ", array[i]);
                    }

                printf("]\n");
            }


// Inserting at the end
            else if (position == no_of_elements+1) {
                no_of_elements++;
                array[no_of_elements-1] = element;
                
                printf("The Array: [ ");
                for (int i =0; i < no_of_elements; i++) {
                    printf("%d ", array[i]);
                    }

                printf("]\n");
            }


// Inserting in between
            else {
                for (int i = no_of_elements+1; i > index; i--) {
                    array[i] = array[i-1];
                }

                array[index] = element;
                no_of_elements++;

                printf("The Array: [ ");
                for (int i =0; i < no_of_elements; i++) {
                    printf("%d ", array[i]);
                    }

                printf("]\n");
            }
        }
    
    }
}