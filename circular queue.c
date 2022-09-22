/* A menu driven program to demonstrate implementation of circular queue using array*/


#include<stdio.h>
#include<stdlib.h>
#define N 5

int queue[N];
int front = -1;
int rear = -1;

void Enqueue(int n){
    /*printf("Enter an element:\n");
    scanf("%d",&n);*/
    if((rear+1)%N == front){
        printf("Queue is full\n");
    }
    else if (front == -1 && rear == -1){
        printf("Enter an element:\n");
        scanf("%d",&n);
        front = 0;
        rear = 0;
        queue[rear] = n;
    }
    else{
        printf("Enter an element:\n");
        scanf("%d",&n);
        rear = (rear+1)%N;
        queue[rear] = n;
    }
}

void Dequeue(){
    int y;
    if(front == -1 && rear == -1){
        printf("Queue is empty\n");
    }
    else if (front == rear){
        y = queue[front];
        printf("Dequeued element is %d\n",y);
        front = -1 ;
        rear = -1;
    }
    else{
        y = queue[front];
        printf("Dequeued element is %d\n",y);
        front = (front+1)%N;
    }
}

void Display(){
    int i = front;
    if((rear+1)%N == front)
        printf("Queue is empty\n");

    else{
        while((i != rear ){
            printf("%d\n",queue[i]);
            i = (i+1)%N;
        }
        printf("%d\n",queue[rear]);
    }
}

int main(){
    int ch,n;
    while(ch){
        printf("Enter your choice:\n");
        printf("1.Insert an element\n2.Delete an element\n3.Display\n4.Exit\n");
        scanf("%d",&ch);
       
        switch(ch){

            case 1 : Enqueue(n);
                    break;
            case 2 : Dequeue();
                    break;
            case 3 : Display();
                    break;
            case 4 : exit(0);
                    break;
            default : printf("Invalid choice\n");
                    break;
        }
    }
}
