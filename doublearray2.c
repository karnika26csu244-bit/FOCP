#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    printf("\n Enter the string");
    scanf("%19[^\n]s",str1);

    printf("\nStr1size=%d str1 len=%d str1=%s",sizeof(str1),strlen(str1),str1);
    return 0;
}