#include<stdio.h>
int main()
{
    int n=120;
    int *np=&n;
    *np=670;
    printf("\n n=%d n address=%d  address=%p",n,&n,&n);
    printf("\nc*np=%d  np=%d   np=%p",*np,np,np);
}