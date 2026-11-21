#include<stdio.h>
int main()
{
    int test[5][3],r,c,sum=0;
    printf("\n enter value for test:");
    for (r=0;r<5;r++)
{
    for(c=0;c<3;c++)
    {
        scanf("%d",&test[r][c]);
    }
}
printf("\n The Test Array is :\n");
for(r=0;r<5;r++)
{
    for(c=0;c<3;c++)
    {
        printf(" %d ",test[r][c]);
        sum+=test[r][c];
    }
    printf("\n sum=%d",sum);
}
return 0;
}