#include<stdio.h>
main()
{
	char u;
	scanf("%c",&u);
	if((u=='r')||(u=='R'))
	{
		printf("RED Light Please STOP");
	}
	else if((u=='r')||(u=='R'))
	{
		//yellow
		printf("YELLOW Light Please Check and Go");
	}
	else if((u=='r')||(u=='R'))
	{
	//green
	printf("GREEN Light Please GO");
	}
	else
	{
		printf("THERE IS NOSIGNAL POINT.");
	}
}
