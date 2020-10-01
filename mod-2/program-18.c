//pre-requests recursion and loops
//---------------------------------------------------------------------
#include<stdio.h>
float fact(int x);//funtion definition
main()
{
	int n;
	float p,i,c,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{   p=fact(i);//funtion call
	    c=i;
		sum=sum+(c/p);
	}
	printf("sum==%f\n",sum);
}
//-----------------------------------------------------------------------
// factorial using recursion
float fact(int x)
{    float fc=0;
	if(x==1)
	{
		return(1);
	}
	else{
	
		fc=x*fact(x-1);
	}
	return(fc);	
}
