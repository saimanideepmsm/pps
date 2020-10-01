#include<stdio.h>
#include<math.h>
main()
{ int a,b,c,d;
scanf("%d%d%d",&a,&b,&c);
d=pow(b,2)-4*a*c;
if ((a==0)&&(b==0))
{printf("no solution");}
else if(d>0){printf("two roots");}
else if(d<0)
{
	printf("np real roots");
}
}
