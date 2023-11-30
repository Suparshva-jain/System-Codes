#include <stdio.h>
#define size 5

int cr_queue[size];

int front = -1;
int rear = -1;


void display(){
    
    int i = front;

    if (front == -1 & rear == -1) 
        printf("Nothing to Show  --  [ ]\n");
    
    else{
        printf("[ ");
        while (i != rear) {
            printf("%d ", cr_queue[i]);
            i = (i+1)%size;
        }
        printf("]\n");
    }
}

void enqueue(int x){

    if (front == -1 & rear == -1) {
        front = rear =  0;
        cr_queue[rear] = x;
    }
    else if (((rear+1) % size) == front ) 
        printf("Queue Overflowed -- The Last Queue is: ");
    
    else{
        rear = (rear+1)%size;
        cr_queue[rear] = x;
    }

    display();

}

void dequeue(){

    if (front == rear) 
        front = rear = -1;
    
    else if (front == -1 & rear == -1)
        printf("Queue is Empty");

    else{
        printf("The Last Element is: %d  --  ", cr_queue[front]);
        front = (front+1)%size;
    }

    display();
}


int main(){

    display();
    enqueue(23);
    enqueue(12);
    enqueue(90);
    enqueue(11);
    enqueue(94);
    enqueue(0);
    dequeue();
    dequeue();
    enqueue(34);
    dequeue();
    enqueue(4);


    
    
    }