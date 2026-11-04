//Simple Interest Calculator

#include <stdio.h>
int main()
{
int p;
float r,t,si;
printf("\n Principal Amount:");
scanf("%d",&p);
printf("\n Rate of Interest:");
scanf("%f",&r);
printf("\n Time period in years:");
scanf("%f",&t);
si=(p*r*t)/100;
printf("\n Simple Interest:%.2f",si);
return 0;
}