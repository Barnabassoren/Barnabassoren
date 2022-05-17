// Simple calculator program in c language with Barna soren:
#include<stdio.h>
#include<math.h>
int main()
{
    char ch;
    int num1,num2;
    printf("choose the operator(+,-,*,/,%%):");
    scanf("%c",&ch);
    printf("Enter the two numbers: ");
    scanf("%d%d",&num1,&num2);
    
    switch(ch)
    {
        case '+':
        printf("%d+%d=\t%d\n",num1,num2,num1+num2);
        break;

        case '-':
        printf("%d-%d=\t%d\n",num1,num2,num1-num2);
        break;

        case '*':
        printf("%d*%d=\t%d\n",num1,num2,num1*num2);
        break;

        case '/':
        printf("%d/%d=\t%d\n",num1,num2,num1/num2);
        break;

        case '%':
        printf("%d%d=\t%d\n",num1,num2,num1%num2);
        break;

        default:
        printf("Error! undefine operator:");
         


    }

   return 0;
}
    