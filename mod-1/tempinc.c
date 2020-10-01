#include <stdio.h>
#include <stdlib.h>

/*Fahrenheit and convert it
Into Celsius by using the formula C = (F - 32) × 5/9*/

int main() 
{ 

int F;
float temp;
scanf("%d",&F);
temp=(F - 32)*5/9;
printf("the temp in celsius is %f",temp);
}
