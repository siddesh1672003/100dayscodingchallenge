/*Menu driven program to implement stack using array*/

#include<stdio.h>
#include<stdlib.h>
#define N 5;

int stack[N];
int top = -1;

void Push(){
    if(top = N-1)
        printf("Stack overflow\n");
    
    else{
        int x;
        printf("Enter an element:\n");
        scanf("%d",&x);
        top = 0;
        stack[top] = x;
        top++;
    }
}

void Pop(){
    int y;
    if(top = -1)
        printf("Stack Underflow\n");

    else{
        y = stack[top];
        top--;
        printf("Deleted element is %d",y);
    }
}

void Peek(){
    if(top == -1)
        printf("Stack is underflow");
    else{
    int a = stack[top];
    printf("Top element is %d\n",a);
    }
}

void Display{
    if(top == -1)
        printf("Stack is underflow\n");
    else{
        for(i=0; i <= top; i++)
            printf("%d\n",stack[top]);
    }
}

void reversestack(){
    if(top == -1)
        printf("Stack is underflow\n");
    
    else{
        int stack1[N];
        int b,top1=-1;
        while(top != -1){
            b = stack[top];
            top1 = 0;
            stack1[top1] = b;
            top1++;
            top--;
        }
        for(int j = 0; j <= top1; j++){
            printf("%d\n",stack1[j]);

        }
    }


}
int main(){
    int ch;
    while(ch){
        printf("Enter your choice:\n");
        printf("1.Push\n2.Pop\n3.Display\n4.Peak\n5.Exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1 : Push();
                    break;
            case 2 : Pop();
                    break;
            case 3 : Display();
                    break;
            case 4 : Peak();
                    break;
            case 5 : exit(0);
                    break;
            case 6 : reversestack();
                    break;
            default : printf("Invalid choice\n");
        }
    }
}