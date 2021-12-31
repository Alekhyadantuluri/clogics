#include<stdio.h>
void main()
{
	int cp,sp,loss,profit;
	float lossp,profitp;
	printf("enter cp and sp");
	scanf("%d%d",&cp,&sp);
	if(cp>sp)
	{
		printf("loss");
		loss=cp-sp;
		lossp=loss*100/cp;
		printf("\namount of loss %d",loss);
		printf("\nloss of percentage %f",lossp);
	}
	else if(sp>cp)
	{
		printf("profit");
		profit=sp-cp;
		profitf=profit*100/cp;
		printf("\namount of profit %d",profit);
		printf("\nprofit of percentage %f",profitp);
	}
	else
	{
		printf("no profit no loss");
	}
}
