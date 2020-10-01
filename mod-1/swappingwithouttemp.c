/*swap two numbers with and without using a
third variable?*/
#include <stdio.h>
#include <stdlib.h>

/*Fahrenheit and convert it
Into Celsius by using the formula C = (F - 32) × 5/9*/

int main() 
{ 
int a,b;
scanf("%d%d",&a,&b);
printf("the values of a,b are ------%d,%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("a==%d,b==%d the numbers are swaped",a,b);
}
