#include <stdio.h>
#include <stdlib.h>

// ------------------------------- STRUCTURE IMPLEMENTATION ----------------------------------------
struct node{
    int data;
    struct node* link;
}* start = NULL;


//-------------------------------------- OPERATIONS -----------------------------------------------------

//                                     IMPLEMENTATION  

void implementation(){

    printf("\nYour Linked List will be Implemented with 3 Nodes, considering that (START = NULL)\n\n");

    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data for 1st Node: ");
    scanf("%d", &ptr->data);
    start = ptr;
    int a = start->data;

    ptr->link = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data for 2nd Node: ");
    ptr = ptr->link;
    scanf("%d", &ptr->data);
    int b = start->link->data;

    ptr->link = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data for 3rd Node: ");
    ptr = ptr->link;
    scanf("%d", &ptr->data);
    int c = start->link->link->data;
       
    printf("\nYour Linked List is Created with 3 Nodes containing values: %d, %d, %d", a,b,c);
}

//                                        PRINTING  

void print(){

    struct node* ptr = start;

    if (start == NULL) {
        printf("\nThe Linked List is EMPTY\n");
    }
    else {
        printf("\nLinked List: [ ");
        while (ptr != NULL) {
            printf("%d ", ptr->data);
            ptr = ptr->link;
        }
        printf("]\n");
    }
}

//                                        COUNTING  

int count(){

    struct node* ptr = start;
    int cnt = 0;
    if (start == NULL) 
        return 0;
    
    else {
        while (ptr != NULL) {
            cnt = cnt + 1;
            ptr = ptr->link;
        } }

    return cnt; 
}


//-------------------------------------- INSERTION -----------------------------------------------------

//                           ----  INSERTION AT BEGINNING  ----

void beg_insert(int x){

    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
        
        if (start == NULL){
            start = temp;
            return;     }

        else{
            temp->link = start;
            start = temp;
        }
}

//                            ----  INSERTION AT THE END  -----

void end_insert(int x){

    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;

    struct node*ptr = start;

        if (start == NULL){
            start = temp;
            return;     }

        else {
            while (ptr->link != NULL) 
                ptr = ptr->link;
            ptr->link = temp;    }
            
}

//                       ----  INSERTION AT THE GIVEN POSITION  ----

void pos_insert(int x, int pos){

    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;

    struct node*ptr = start;
    struct node*ptr_2 = start;


    if (start == NULL){
        start = temp;
        return;     }
        
    else {
        if (pos < 0 || pos > count()) {
            printf("\nPOSITION ERROR\n");
            return;
        }
        
        else if (pos == 1) 
            beg_insert(x);
            
        else if (pos == count()) 
            end_insert(x);
            
        else {

            for (int i = 0; i < pos; i++)
                ptr = ptr->link;    
            
            temp->link = ptr;


            for (int i = 0; i < pos-1; i++)
                ptr_2 = ptr_2->link;    
            
            ptr_2->link = temp;

        }
    }
}


//-------------------------------------- DELETION -------------------------------------------------------

//                        ----  DELETION FROM THE BEGINNING  ----

void beg_delete(){

    struct node*ptr = start;

    if (start == NULL) 
        printf("\nCan't delete anything as LINKED LIST is empty\n");
    
    else{

        ptr = ptr->link;
        free(start);
        start = ptr;
    }

}

//                           ----  DELETION FROM THE END  ----

void end_delete(){
    
    struct node* ptr = start;
    struct node* ptr_2 = start;

    if (start == NULL) 
        printf("\nCan't delete anything as LINKED LIST is empty\n");

    else if (count() == 1){
        free(ptr);
        start = NULL;
    }      

    else if (count() >= 2) {

        while (ptr_2->link->link != NULL) 
            ptr_2 = ptr_2->link;

        ptr = ptr_2->link;

        ptr_2->link = NULL;
        free(ptr);

    }  
}

//                      ----  DELETION FROM THE GIVEN POSITION  ----

void pos_delete(int pos){

    struct node* ptr = start;
    struct node* ptr_2 = start;

    int temp = pos;

    if (start == NULL) 
        printf("\nCan't delete anything as LINKED LIST is empty\n");      

    else{

        if (pos < 0 || pos > count()) {
            printf("\nPOSITION ERROR\n");
            return; }

        else if (pos == 1) 
            beg_delete();
            
        else if (pos == count()) 
            end_delete();

        else{

            while (pos != 0) {
                ptr_2 = ptr_2->link;
                pos = pos-1;
            }

            while (temp-2 != 0) {
                ptr = ptr->link;
                temp = temp-1;
            }

            free(ptr->link);
            ptr->link = ptr_2;

        }
    }    
}


//-------------------------------------- MAIN -------------------------------------------------------


int main(){

    print();
    printf("%d\n", count());
    beg_insert(67);
    beg_insert(90);
    end_insert(120);
    print();
    printf("%d\n", count());

    end_insert(89);
    beg_insert(11);
    print();
    printf("%d\n", count());

    pos_insert(13, 3);
    print();
    printf("%d\n", count());

    beg_delete();
    print();
    printf("%d\n", count());

    pos_delete(8);
    print();
    printf("%d\n", count());  





    
}


