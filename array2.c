
#include <stdio.h>

int main()
{
    int attendance[10];

    

    for (i=0; i<10;i++)
     {  printf("\n  Enter for index %d",i);
        scanf("%d", &attendance[i]);
    }

    for (i=0; i<10;i++) {
        printf("\n%d",attendance[i]);
        }
        {
            if (attendance[i]>=75)
            eligible++;
            else
            noteligible++;

        }
        printf("\n Eligible count =%d",eligible);
        printf("\n Not Eligible count =%d",noteligible);
        
    

   
    return 0;
}