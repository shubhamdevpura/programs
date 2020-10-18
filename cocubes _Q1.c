#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int a[10],e,n ,count=0,i;
	
	printf("\nEnter ELements:");
	
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter a element which u want to search");
	scanf("%d",&n);
	
	for(i=0;i<=9;i++)
	{
		if(a[i]==e)
			count++;
			
		if(count==n)
		{
			printf("\n%d occurence Found at %d",n,i);
			break;
		}
	}
	
	if(i==10)
	{
		printf("\nElement Not Occured %d times",n);
	}
	return 1;
}
