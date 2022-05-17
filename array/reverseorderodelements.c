#include<stdio.h>
int main()
{
    int arr[]={34,35,36,37,38,39};
    for(int i=0; i<6; i++)
    {
        printf("%d ",arr[i]); //original order 
    }
    //reverse order
    printf("\n");
    for(int i=5; i>=0; i--)
    
    {
        printf("%d ",arr[i]);
    }
    return 0;
}