#define MAX 20
int stack[MAX];
int top=-1;
void push(int item)
{
    if(top==MAX-1)
      printf("stcak OVERFLOW");
    else#include<stdio.h>

    {
     top++;
     stack[top]=item;
    }
}
int pop()
{
    if(top==-1)
      printf("stack under flow");
    else
    {
    int item=stack[top];
     top--;
     return item;
    }
}
int isOperand(char ch)
{
    if(ch>='0'&&ch<='9')
       return 1;
    else
       return 0;
}
int isEmpty()
{
    if(top==-1)
      return 1;
    else
    return 0;
}

int main()
{
    char postfix[MAX],ch;
    int A,B,i,r;
    printf("enter the postfix expression\n");
    scanf("%s",postfix);
    for(i=0;postfix[i]!='\0';i++)
    {
        ch=postfix[i];
        if(isOperand(ch))
            push(ch-'0');
        else
        {
            A=pop();
            B=pop();
                switch(ch)
                {
                    case '+': r=A+B;
                              break;
                    case '-': r=A-B;
                              break;
                    case '*': r=A*B;
                              break;
                    case '/': r=A/B;
                              break;
                    case '%': r=A%B;
                              break;
                }
                push(r);
        }
    }
    r=pop();
    if(!isEmpty)
      printf("invalid postfix expression\n");
    else
    {
      printf("result=%d\n",r);
    }
    return 0;
}
    
    
    