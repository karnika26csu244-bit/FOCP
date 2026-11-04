#include <stdio.h>
int main()
{
int i ,sum;
for(i=1,sum=0;i<=200;i++)
{
    if(i%7==0){
        printf("\n found the multiple of 7,will move to next no");
        continue;
    }
    printf("\n%d" ,i);
    sum=+i;
}
printf("\n%d",sum);
return 0;











}
