#include<stdio.h>
void main()
{
	int num;
	printf("enter num");
	scanf("%d",&num);
	if(num%1==0)
	{
		printf("divisible by 1");
	}
	if(num%2==0)
	{
		printf("\ndivisible by 2");
	}
	if(num%3==0)
	{
		printf("\ndivisible by 3");
	}
	if(num%4==0)
	{
		printf("\ndivisible by 4");
	}
	if(num%5==0)
	{
		printf("\ndivisible by 5");
	}
}
