#include<stdio.h>
#include<string.h>
#define size 100

int main()
{
    char str[size];
    printf("Enter your name: ");
    gets(str);
     printf("This is your name's heart shape");
    
    for(int i=0; i<=4; i++)
    {
        for(int j=0; j<=19; j++)
        {
            if(j>=4-i && j<=i+5 || j>13-i && j<=i+15)
            {
                printf("%s",str);            }
            else
            {
                printf("        ");
            }
        }
        printf("\n");
    }
    for(int i=0; i<=12; i++)
    {
        for(int j=0; j<=19; j++)
        {
        if(j>=i+1 && j<=18-i)
        {
           printf("%s",str);

        }
        else
        {
            printf("        ");
        }

        }
        printf("\n");

    }
    return 0;
}