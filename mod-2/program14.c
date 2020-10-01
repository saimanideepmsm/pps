#include<stdio.h>
#include<math.h>
int main()
{
  int s,p,sum=0,temp;
  scanf("%d",&s);
  temp=s;
  while(s>0)
  { p=pow(s%10,3);
    //printf("%d----value of p\n",p);
  	sum=sum+p;
  	s=s/10;
  }
  if(sum==temp)
  {
  	printf("armstrong number");
  }
  else
  {
  	printf("not armstrong number");
  }
}
