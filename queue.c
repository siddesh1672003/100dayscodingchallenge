/* A menu driven program to demonstrate implementation of queue using array*/


#include<stdio.h>
#include<stdlib.h>
#define N 5

int queue[N];
int front = -1,rear = -1;

void Enqueue(int n){
    int x;
    printf("Enter an element:\n");
    scanf("%d",&x);
    if(rear == N-1){
        printf("Queue is full\n");
    }
    else if (front == rear){
        front =  rear = 0;
        queue[rear] = x;
        rear++;
    }
    else{
        queue[rear] = x;
        rear++;
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
        front = rear = -1;
    }
    else{
        y = queue[front];
        printf("Dequeued element is %d\n",y);
        front--;
    }
}

void Display(){
    int i;
    for(i = rear; i >= front; i--){
        printf("%d\n",queue[i]);
    }
}

int main(){
    int ch,n;
    while(1){
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
        }
    }
}
