#include<stdio.h>
int main()
{
	int com,p;
	scanf("%d",p);
	if(p<=5000){
		com=0;
	}
	else if((p>5000)&&(p<=10000))
	{
		com=p*2;
		com/=100;
	}
		else if(p<=5000){
	    com=p*5;
		com/=100;
	}
	printf("commission==%d",com);
}
