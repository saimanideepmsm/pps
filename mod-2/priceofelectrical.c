#include<stdio.h>
main()
{
	int u,sum;
	scanf("%d",&u);
	if((u>0) && (u<=200))
	{
		sum=u*0.50;
	}
	else if((u>200) && (u<=400))
	{
		u=u-200;
		sum=(u*0.65)+100;
	}
	else if((u>400) && (u<=600))
	{
		u=u-400;
		sum=(u*0.80)+230;
	}
	else
	{
		u=u-600;
		sum=u+390;
	}
	printf("%d",sum);
}
