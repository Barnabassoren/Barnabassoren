#include<stdio.h>
int main()
{
    int a[]={[5]=2,[0]=5};
    for(int i=0; i<6; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}