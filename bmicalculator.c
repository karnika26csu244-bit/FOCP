//BMI Calculator

#include <stdio.h>
int main()
{
int j;
float k,bmi;

printf("Weight in kg:");
scanf("%d",&j);
printf("Height in m:");  
scanf("%f",&k);
bmi = j/(k*k);
printf("BMI:%f \n",bmi);
return 0;
}