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
    char infx[100],prfx[100],swap;
    int l, i, k=0, j;
    scanf("%s", infx);
    l = strlen(infx);
    strrev(infx);
    infx[l]='(';
    push(')');
    for(i=0; i<=l; i++)
    {
           if(infx[i]!='+' && infx[i]!='-' && infx[i]!='*' && infx[i]!='/' && infx[i]!='(' && infx[i]!=')' && infx[i]!='^')
               prfx[k++]=infx[i];
           else if(infx[i]=='+' || infx[i]=='-' || infx[i]=='*' || infx[i]=='/' || infx[i]=='^')
           {
               while(top_value()!=')' && prec(top_value())>prec(infx[i]))
               {
                   prfx[k++]=top_value();
                   pop();
               }
               push(infx[i]);
           }
           else if(infx[i]=='(')
           {
                while(top_value()!=')')
                {
                    prfx[k++]=top_value();
                    pop();
                }
                pop();
           }
           else
               push(infx[i]);
    }
    prfx[k]='\0';
    strrev(prfx);
    printf("%s\n",prfx);
    return 0;
}
