#include<stdio.h>
int main()
{
	int a[100],n,num,i,flag=0;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter searching elements:");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		flag=1;
	
	}
	if(flag==1)
	printf("number is found=%d",num);
	else
	printf("number is not found");
}
