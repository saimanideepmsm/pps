#include<stdio.h>
int main()
{
	int i,s,sum=0,p;
	scanf("%d",&s);
	while(s>0)
	{   p=s%10;
		sum=(sum*10)+p;
		//printf("%d\n",sum);
		s=s/10;
	}
	printf("%d\n",sum);
}
