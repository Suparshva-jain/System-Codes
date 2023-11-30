#include <stdio.h>
#define Size 5

int queue[Size];

int front = -1;
int rear = -1;

void display(){
    if (front == -1 & rear == -1) 
        printf("Nothing to Show  --  [ ]\n");

    else{
        printf("[ ");
        for (int i = front; i < rear+1; i++) 
            printf("%d ", queue[i]);
        printf("]\n");
    }
}

void enqueue(int x){
    if(rear == Size-1)
        printf("Queue Overflow  --  The last queue is: ");
    
    else if (front == -1 & rear == -1){
        front = rear = 0;
        queue[rear] = x;
    }
    else {
        rear++;
        queue[rear] = x;
    }

    display();
}


void dequeue(){
    if (front == rear) 
        front = rear = -1;
    
    else if (front == -1 && rear == -1 ) 
        printf("Empty Queue");
    
    else{
        printf("The Last Element is: %d  --  ", queue[front]);
        front++; }

    display();
}





int main(){

    enqueue(15);
    enqueue(12);
    enqueue(20);
    enqueue(89);
    enqueue(11);
    enqueue(10);
    printf("\n\n");
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    printf("\n\n");
    enqueue(45);
    enqueue(76);
    enqueue(34);
    enqueue(65);



}
