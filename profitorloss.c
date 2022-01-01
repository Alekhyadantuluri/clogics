#include<stdio.h>
void main()
{
	int cp,sp;
	printf("enter cp and sp");
	scanf("%d%d",&cp,&sp);
	if(cp-sp>0)
	{
		printf("loss");
	}
	else
	{
		printf("profit");
	}
}
