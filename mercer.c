#include <stdio.h>
char Agreater(int a,int b)
{
if (a>b)
return 'Y';
else
return 'N';
}

int main()
{
int x1,x2;
scanf("%d%d",&x1,&x2);
printf("%c",Agreater(x1,x2));
 
return 0;




}









