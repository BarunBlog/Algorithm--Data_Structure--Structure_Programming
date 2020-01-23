#include<stdio.h>
#include<stdlib.h>
int arr[3];
int top=-1;
void push(int value)
{
    if(top<3-1){
        top++;
        arr[top]=value;
    }
    else{
        printf("Can not push, stack is full\n");
    }
}
void pop()
{
    if(top>=0){
        top--;
    }
    else{
        printf("Can not pop, the stack is empty\n");
    }
}
void print()
{
    int i;
    printf("Current stack");
    for(i=0;i<=top;i++)
        printf("%d ",&arr[i]);
    printf("\n");
}
int main()
{
    push(5);
    print();
    push(4);
    print();
    push(3);
    print();
    push(2);
    print();
    push(1);
    print();
    printf("POPED\n");
    pop();
    print();
    printf("PUSHED\n");
    push(100);
    print();
    printf("POPED\n");
    pop();
    print();
    pop();
    print();
    pop();
    print();
    pop();
    print();

    return 0;

}
