#include<stdio.h>
#define sz 100

int arr[sz],top=0;

void push(int val)
{
    if(top>=sz)
        printf("No more space on Stack.\n");
    else
        arr[top++]=val;
}

void pop()
{
    if(top<=0)
        printf("Stack is empty\n");
    else{
        top--;
        printf("Popped element: %d\n",arr[top]);
    }
}

void printlist()
{
    int i;
    for(i=0;i<top;i++)
        printf("%d ",arr[i]);
    puts("");
}
int main()
{
    push(5);
    printlist();
    push(4);
    printlist();
    push(3);
    printlist();
    push(2);
    printlist();

    pop();
    printlist();
    pop();
    printlist();
    pop();
    printlist();
    pop();
    printlist();

}
