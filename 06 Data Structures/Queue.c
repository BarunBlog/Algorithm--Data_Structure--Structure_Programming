#include<stdio.h>
int front,rear;
int queue[5];
void enqueue(int value)
{
    if(rear>5){
        printf("Overflow\n");
        return;
    }
    queue[rear++]=value;
}
int dequeue()
{
    if(front>rear){
        printf("Underflow\n");
        return -1;
    }
    return queue[front++];
}
int main()
{
    int a,b,c;
    int i;
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    printf("Current queue: \n");
    for(i=0;i<rear;i++)
        printf("%d ",queue[i]);
        printf("\n");
    a=dequeue();
    b=dequeue();
    c=dequeue();
    printf("Dequeued Values: \n");
    for(i=0;i<front;i++)
        printf("%d ",queue[i]);
        printf("\n");
}
