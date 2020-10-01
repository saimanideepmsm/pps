#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=0;i<=100;i++)
	{
		if((i%6==0)&&(i%4!=0))
		{   printf("%d\n",i);
			sum+=i; 
		}
	}
	printf("sum=%d",sum);
}
