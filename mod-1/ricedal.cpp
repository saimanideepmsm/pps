/*The price of one kg of Rice is Rs. 40.75 and one kg of Dal is Rs. 72.50.
Write a C program to get these values from the user and display the
prices as follows:*/
#include <stdio.h>
#include <stdlib.h>
int main() 
{ 
float r,d;
scanf("%f%f",&r,&d);
printf("**** LIST OF ITEMS ****\n");
printf("***Item          Price***\n");
printf("RICE             %f\n",r);
printf("DAL              %f\n",d);
}
