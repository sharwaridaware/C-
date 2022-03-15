#include<stdio.h>

void main()
{
int n;
printf("enter size of the array\n");
scanf("%d",&n);
int a[n];
printf("enter elements\n");
for(int i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}	
printf("array is\n");
for(int i=0;i<n;i++)
{
	printf("%d",a[i]);	
}

//sum of all elements
int sum=0;
for(int i=0;i<n;i++)
{	
sum=sum+a[i];
}

printf("sum of all elements are %d",sum);
}


