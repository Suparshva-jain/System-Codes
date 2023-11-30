#include<stdio.h>

void Fibonacci(int m){

    static int a=0,b=1,c;

    if(m>0){

        c = a + b;
        a = b;
        b = c;

    printf("%d ", c);
    Fibonacci(m-1);
    }
}

int main(){

    int num;

    printf("upto how many num you want fibonaci to be: ");
    scanf("%d",&num);

    printf("The Fibonacci Series will be: ");
    printf("%d %d ",0,1);
    Fibonacci(num-2);

}

