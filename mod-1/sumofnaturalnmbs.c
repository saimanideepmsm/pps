/*C program to calculate the sum of N natural numbers without
using a loop?*/
#include <stdio.h>
#include <stdlib.h>
int main() 
{ 
int n,s;
scanf("%d",&n);
printf("%d is entered value\n",n);
s=n*(n+1);
s/=2;
printf("sum of %d natural numbers is %d",n,s);
}
