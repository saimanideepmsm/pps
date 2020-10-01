#include<stdio.h>
#include<math.h>
int main()
{
	int x1,x2,y1,y2;
	float d;
	printf("enter the first cordinates\n");
	scanf("%d%d",&x1,&y1);
	printf("enter the second cordinates\n");
	scanf("%d%d",&x2,&y2);\
	d=pow((x2-x1),2)+pow((y2-y1),2);
	d=sqrt(d);
	printf("%f",d);
}
