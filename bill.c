#include<stdio.h>
void main()
{
	int units;
	float bill;
	printf("enter units");
	scanf("%d",&units);
	if(units<199)
	{
		bill=units*1.20;
	}
	else if(200>=units&&units<400)
	{
		bill=units*1.50;
	}
	else if(400>=units&&units<600)
	{
		bill=units*1.80;
	}
	else if(600<units)
	{
		bill=units*2.00;
	}
	if(bill<400)
	{
		printf(" charge is %f",bill);
	}
	else
	{
		printf("charge is %f",bill);
		int surcharge,totalbill;
		surcharge=15*bill/100;
		printf("\nsurcharge is %d",surcharge);
		totalbill=surcharge+bill;
		printf("\ntotal bill is %d",totalbill);
	}
}
