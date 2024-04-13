#include<stdio.h>
 void selectionsort(int[],int);
 int main()
 {
 	int a[20],n,i;
 	printf("enter n");
 	scanf("%d",&n);
 	printf("enter %d elements",n);
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 selectionsort(a,n);
	 printf("sorted list:\n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%4d",&a[i]);
	 }
	 return 0;
 }
 void selectionsort(int a[],int)
 {
 	int n,i,j,temp,minpos;
 	for(i=0;i<n-1;i++)
 	{
 		minpos=i;
 		for(j=i+1;j<n;j++)
 		{
 			if(a[j]<a[minpos])
 			{
 			minpos=j;	
			 }
		 }
		 temp=a[i];
		 a[i]=a[minpos];
		 a[minpos]=temp;
	 }
 }
