#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int stack[MAX];
int Top=-1;

int choice();
void push();
void pop();
void display();
void top();
int main()
{
    while(choice()!=5)
    {
        choice();
    }
    return 0;
}
int choice()
{
    int ch;
    printf("\n\n\tEnter your choice: ");
    printf("\n\n\t1.Push ");
    printf("\n\n\t2.pop ");
    printf("\n\n\t3.Top Element ");
    printf("\n\n\t4.Display ");
    printf("\n\n\t5.Exit \t");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        top();
        break;
    case 4:
        display();
        break;
    case 5:
        exit (0);///Header file... #include<stdlib.h>
    default:
        printf("\nYou entered out of option, try again ");
    }
    return ch;
}
void push()
{
    int element;
    if(Top==MAX-1)
        printf("\nYour stack is full.");
    else
    {
        scanf("%d",&element);
        stack[++Top]=element;
    }
}
void pop()
{
    int data;
        if(Top==-1)
            printf("Your stack is empty.");
        else
        {
            data=stack[Top];
            printf("\nDeleted item is: %d",data);
            Top--;
        }
}
void top()
{
    if(Top==-1)
        printf("\nYour stack is empty.");
    else
        printf("\nNow, Top element is: %d",stack[Top]);
}
void display()
{
    int i;
    printf("\n\tYour stack: ");
    for(i=Top;i>=0;i--)
        printf(" %d",stack[i]);
}
