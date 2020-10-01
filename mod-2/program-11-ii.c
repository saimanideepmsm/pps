#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,c=0;
	char string[100],temp[100];
	scanf("%s",&string);
	printf("entered string is babughi  -------------%s\n",string);
	strcpy(temp,string);
	strrev(temp);
	if(strcmp(temp,string)==0){
	
		printf("polindrome");}
		
	else
	{
		printf("not a polindrome");
	}
}
