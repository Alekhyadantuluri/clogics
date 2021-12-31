#include<stdio.h>
void main()
{
	int mat,phy,chem,com_science;
	printf("enter marks of 4");
	scanf("%d%d%d%d",&mat,&phy,&chem,&com_science);
	if(mat<35)
	{
		printf("failed in maths");
	}
	if(phy<35)
	{
		printf("\nfalied in phy");
	}
	if(chem<35)
	{
		printf("\nfailed in chem");
	}
	if(com_science<35)
	{
		printf("\nfailed in computer science");
	}
}
