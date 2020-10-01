#include<stdio.h>
main()
{
	int lcm,gcd,i,a,b,min,max;
	scanf("%d%d",&a,&b);
	if(a>b){min=b; max=a;}
	else{min=a; max=b;}
	//-----------------------------------------------------------
	for(i=1;i<=max;i++)
	{
		if((i%a==0)&&(i%b==0))
		{
			lcm=i;
		}
	}
	printf("lcm=%d\n",lcm);
	//-------------------------------------------------------------
	for(i=1;i<=min;i++)
	{
		if((a%i==0)&&(b%i==0))
		{
			gcd=i;
		}
	}
		printf("gcd=%d\n",gcd);
}
//-----------------------------------------------------
