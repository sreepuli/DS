#include<stdio.h>
 void bubblesort(int[],int);
 int main()
 {
 	int a[20],i,n;
 	printf("enter n");
 	scanf("%d",&n);
 	printf("enter %4d elements",n);
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 bubblesort(a,n);
	 printf("sorted list:\n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d",&a[i]);
	 }
	 return 0;
 }
 void bubblesort(int a[],int n)
 {
 	for(int i=0;i<n-1;i++)
 	{
 		for(int j=0;j<n-1-i;j++)
 		{
 			if(a[j]>a[j+1])
 			{
 				int temp=a[j];
 				a[j]=a[j+1];
 				a[j+1]=temp;
			 }
		 }
	 }
 }
