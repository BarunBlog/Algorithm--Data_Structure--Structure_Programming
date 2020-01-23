#include<stdio.h>
int G;

void print();
void go();

void Show()
{
    printf("Showed\n");
}
int main()
{
    Show();
    print();
    return 0;
}
void print()
{
    printf("Nothing\n");
    go();
    //printf("%d\n",G);
}
void go()
{
    printf("Go\n");
}
