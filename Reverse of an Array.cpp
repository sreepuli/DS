#include <stdio.h>
int main()
{
  int i,a[20],n,t;

   printf("Enter the size of an array: ");

   scanf("%d",&n);
 
   printf(" Enter the elements: ");

   for(i=0;i<n;i++)

   scanf("%d",&a[i]);

   for(i=0;i<n/2;i++)
     {
         t = a[i];
         a[i]=a[n-1-i];
         a[n-1-i]=t;
      }
    for(i=0;i<n;i++)
    {
      printf("%4d",a[i]);
    }
}
