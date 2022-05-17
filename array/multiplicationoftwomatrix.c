#include<stdio.h>
int main()
{
    int a[10],b[10],product[10];
    int rows,columns;
    int arows,acolumns;
    
    printf("Enter the rows of matrix=");
    scanf("%d",&rows);
    printf("Enter the columns of matrix=");
    scanf("%d",&columns);
    printf("Enter the elements of first matrix:\n ");
    for(int i=0; i<arows; i++)
    {
        for(int j=0; j<acolumns; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}