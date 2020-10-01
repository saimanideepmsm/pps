#include<stdio.h>
main()
{
	int m,p,c;
	scanf("%d%d%d",&m,&p,&c);
	if(m>=60)
	{
		if((p>=60)&&(c>=50))
		{
			if((m+p+c)>=200)
			{
				if((m+p)>=150)
				{printf("eligible");}
				else{printf("not eligible");}
			}
			else{printf("not eligible");}
		}
		else{printf("not eligible");}
	}
 else
 {printf("not eligible");}
}
