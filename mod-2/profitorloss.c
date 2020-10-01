#include<stdio.h>
main(){
	int cost,selling;
	float per;
	scanf("%d%d",&cost,&selling);
	if(cost<selling)
	{
		printf("you have earned ah profit---");
		per=(selling*100)/cost;
		per=per-100;
		printf("%f%----",per);
	}
	else
	{
			printf("loss bad things happen to good ppl man----");
				per=(selling*100)/cost;
		        per=100-per;
		        printf("%f%----",per);
	}
}
