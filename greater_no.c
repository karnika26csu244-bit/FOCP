#include <stdio.h>
int main()
{
int a,b;

printf("Enter a:");
scanf("%d",&a);
printf("Enter b:");
scanf("%d",&b);

if (a>b)
printf("a is greater.");

else if (b>a)
printf("b is greater");

else
printf("Equal.");
printf("\nOut of Decision.");
return 0;
}