#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char f1[100],f2[100],str1[100],str2[100],str;
	int i,j,l;
	
	printf("\nEnter File Name 1: \n");
	gets(f1);
	
	printf("\nEnter File Name 2:\n");
	gets(f2);
	
	for(i=0;f1[i]!='.';i++)
	{
		str1[i]=f1[i];
	}
	str1[i]='\0';
	
	for(i=0;f2[i]!='.';i++)
	{
		str2[i]=f2[i];
	}
	str2[i]='\0';
	
	printf("%s",str2);
	
	strcat(str1,str2);
	
	str = strrev(str1);
	
	if (strcmp(str1,str2)==0)
	{
		print("True");
	}
	else
	{
		printf("false");
	}
	for(i=l;j=0;i>=0;i--;j++)
	{
		str2[j]=str1[j];
	}
	
	printf("\n%s",str1);
	printf("\n%s",str2);
	
	
	return 0;
}
