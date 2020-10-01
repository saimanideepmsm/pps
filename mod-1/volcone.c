/*C program to find the volume of a Cone by reading the inputs
radius and height from the user where V = ðr2 (h /3)*/
/*C program to calculate the sum of N natural numbers without
using a loop?*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() 
{ 
int h,r;
float vol,pie=3.14;
printf("enter the values of h and r of cone\n");
scanf("%d%d",&h,&r);
vol=(pie*pow(r,2)*(h/3));
printf("%f is the volume of cone with given parameters\n",vol);

}
