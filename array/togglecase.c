#include<stdio.h>
#include<string.h>
#define size 100
int main()
{
    char s[size];
    printf("Enter the string: ");
    gets(s);
    for(int i = 0; s[i]!='\0'; i++)
    {
     if(s[i]>='a' && s[i]<='z')
     {
         s[i]-=32;
     }
     else if(s[i]>='A' && s[i]<='Z')
     {
         s[i]+=32;
     }
    }
    printf("%s",s);
}