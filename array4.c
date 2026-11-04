#include<stdio.h>
int main()
{int arr[]={34,56,78,12,89,92,53,89,10,44};
int max=arr[0],min=arr[0];
for (int i=1;i<10;i++)
{if (max<arr [i])
max=arr[i];
if(min>arr[i])
min=arr[i];
}
printf("\n Max=%d",max);
printf("\n Min=%d",min);
return 0;
}
