#include<stdio.h>
#include<string.h>
int main()
    {
        char str1[20];
        char str2[]= "Hello";
        char str3[6]="Hello";
        char str4[]={'H', 'e', '\0', '1' ,'o','r', 'j' ,'\0' };
printf("\nStr1size=%d str11rn=%d str1=%s", sizeof(str1),strlen(str1),str1);
printf("\nStr2size=%d str21rn=%d str2=%s", sizeof(str2),strlen(str2),str2);
printf("\nStr3size=%d str31rn=%d str3=%s", sizeof(str3),strlen(str3),str3);
printf("\nStr4size=%d str41rn=%d str4=%s", sizeof(str4),strlen(str4),str4);
     return 0;
       }


