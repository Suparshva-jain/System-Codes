#include <stdio.h>


int main(){

    int mat[3][3] = {1,2,3,4,5,0,1,2,3};
    int mat_2[3][3] = {4,3,2,1,2,3,1,5,1};



    printf("Matrix_1");
    for (int i = 0; i < 3; i++) {
        printf(" \n");
        for (int j = 0; j < 3; j++) {
            printf("%d " , mat[i][j]);
        }
    }

    printf("\n\n");
    printf("Matrix_2");
    for (int i = 0; i < 3; i++) {
        printf(" \n");
        for (int j = 0; j < 3; j++) {
            printf("%d " , mat_2[i][j]);
        }
    }

//----------------------------------------------------------------------------------------

// Addition of Matrix


    int add[3][3] = {};
    for (int i = 0; i < 3; i++) {
        printf(" \n");
        for (int j = 0; j < 3; j++) {
            add[i][j] = mat[i][j] + mat_2[i][j];
        }
    }

    
    printf("Added Matrix: ");
    for (int i = 0; i < 3; i++) {
        printf(" \n");
        for (int j = 0; j < 3; j++) {
            printf("%d " , add[i][j]);
        }
    }


//----------------------------------------------------------------------------------------

// Substraction of Matrix
    
    int sub[3][3] = {};
    for (int i = 0; i < 3; i++) {
        printf(" \n");
        for (int j = 0; j < 3; j++) {
            sub[i][j] = mat[i][j] - mat_2[i][j];
        }
    }

    
    printf("Substracted Matrix: ");
    for (int i = 0; i < 3; i++) {
        printf(" \n");
        for (int j = 0; j < 3; j++) {
            printf("%d " , sub[i][j]);
        }
    }

//----------------------------------------------------------------------------------------

// Multiplication of Matrix
    

    int mul[3][3] = {};
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        printf(" \n");
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                sum  += mat[i][k]*mat_2[k][j];
                mul[i][j] = sum;
            }
        }
    }    

    printf("Multiplied Matrix: ");
    for (int i = 0; i < 3; i++) {
        printf(" \n");
        for (int j = 0; j < 3; j++) {
            printf("%d " , mul[i][j]);
        }
    }

}