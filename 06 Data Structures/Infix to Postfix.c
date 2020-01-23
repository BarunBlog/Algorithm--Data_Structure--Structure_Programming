#include<stdio.h>
#include<string.h>
char st[1000];
int top;
void push(char item)
{
    st[top++]=item;
}
void pop()
{
    top--;
}
char top_value()
{
    return st[top-1];
}
int prec(char c)
{
    if(c=='+' || c=='-')
        return 1;
    else if(c=='*' || c=='/')
        return 2;
    else if(c=='^')
        return 3;
}
int main()
{
    int l, i, k=0;
    char prfx[100],pstfx[100];
    scanf("%s",prfx);
    l = strlen(prfx);
    prfx[l]=')';
    push('(');
    for(i=0; i<=l; i++)
    {
           if(prfx[i]!='+' && prfx[i]!='-' && prfx[i]!='*' && prfx[i]!='/' && prfx[i]!='(' && prfx[i]!=')' && prfx[i]!='^')
               pstfx[k++]=prfx[i];
           else if(prfx[i]=='+' || prfx[i]=='-' || prfx[i]=='*' || prfx[i]=='/' || prfx[i]=='^')
           {
               while(top_value()!='(' && prec(top_value())>prec(prfx[i]))
               {
                   pstfx[k++]=top_value();
                   pop();
               }
               push(prfx[i]);
           }
           else if(prfx[i]==')')
           {
                while(top_value()!='(')
                {
                    pstfx[k++]=top_value();
                    pop();
                }
                pop();
           }
           else
               push(prfx[i]);
    }
    pstfx[k]='\0';
    printf("%s\n",pstfx);
    return 0;
}
