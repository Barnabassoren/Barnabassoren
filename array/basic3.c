#include<stdio.h>
int main()
{
    int arr[]={1,7,5,[5]=90,6,[8]=4};
    for(int i=0; i<9; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}