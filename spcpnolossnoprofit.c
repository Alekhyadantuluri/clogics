#include<stdio.h>
void main()
{
	int cp,sp;
	printf("enter cp and sp");
	scanf("%d%d",&cp,&sp);
	if(cp>sp)
	{
		printf("loss");
	}
	else if(sp>cp)
	{
		printf("profit");
	}
	else
	{
		printf("no profit no loss");
	}
}
