#include<stdio.h>
void main()
{
	int x,y,z;
	printf("enter 3 numbers");
	scanf("%d%d%d",&x,&y,&z);
	if((x>y)&&(x>z))
	{
		printf("%d",x);
	}
	else if((y>x)&&(y>z))
	{
		printf("%d",y);
	}
	else
	{
		printf("%d",z);
	}
}
