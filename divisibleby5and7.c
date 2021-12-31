#include<stdio.h>
void main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	if((num%5==0)&&(num%7==0))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
