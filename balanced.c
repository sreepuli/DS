#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 20
char stack[MAX];
int top=-1;
void push(char ch)
{
	if(top==MAX-1)
	  printf("stack overflow\n");
	else
	{ 
	  top++;
	  stack[top]=ch;
	}
}
char pop()
{
	if(top==-1)
	  printf("stack underflow\n");
	else
	{ 
	  char ch=stack[top];
	    top--;
	   return ch;
	}
}
int isEmpty()
{
 	if(top==-1)
 	   return 1;
 	 else
 	   return 0;
}
int isMatch(char ch1,char ch2)
{
   if(ch1=='('&&ch2==')')
       return 1;
   else if(ch1=='{'&&ch2=='}')
        return 1;
   else if(ch1=='['&&ch2==']')
        return 1;
    else
       return 0;
}
 int main()
 {
  char exp[MAX];
  int i;
  printf("enter expression\n");
   scanf("%s",exp);
   for(i=0;exp[i]!='\0';i++)
   {
     char ch=exp[i];
      if(ch=='('||ch=='{'||ch=='[')
         push(ch);
      else
         {
            char item=pop(ch);
            if(!isMatch(item,ch))
            {
                  printf("not balanced\n");
                  exit(0);
            }
        }
   }
   if(isEmpty())
      printf("balanced\n");
    else
      printf("not balanced\n");
      return 0;
}
   
   
  
       
         
       
   
	  
	  
