#include<stdio.h>
#define MAX 20
int stack[MAX];
int top=-1;

void push(int item)
{
    if(top==MAX-1)
        printf("Stack OVERFLOW\n");
    else
    {
        top++;
        stack[top]=item;
    }
}

int pop()
{
    if(top==-1)
        printf("Stack underflow\n");
    else
    {
        int item=stack[top];
        top--;
        return item;
    }
}

int isOperand(char ch)
{
    return (ch >= '0' && ch <= '9');
}

int isEmpty()
{
    return (top == -1);
}

int main()
{
    char postfix[MAX],ch;
    int A,B,i,r;
    printf("Enter the postfix expression:\n");
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
                case '+': r=B+A;
                          break;
                case '-': r=B-A;
                          break;
                case '*': r=B*A;
                          break;
                case '/': 
                          if (A != 0)
                            r=B/A;
                          else {
                            printf("Division by zero error\n");
                            return -1; // Exiting the program
                          }
                          break;
                case '%': 
                          if (A != 0)
                            r=B%A;
                          else {
                            printf("Modulo by zero error\n");
                            return -1; // Exiting the program
                          }
                          break;
            }
            push(r);
        }
    }
    r=pop();
    if(isEmpty())
        printf("Result=%d\n",r);
    else
        printf("Invalid postfix expression\n");

    return 0;
}

