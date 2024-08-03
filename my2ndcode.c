#include<stdio.h>
int main()
{

    int num1,num2;
    char op;

    printf("give me the first number:");
    scanf("%d",&num1);
    printf("givr me the secound number :");
    scanf("%d",&num2);
    getchar();
    printf("give me the operation:");
    scanf("%c", &op);

    if(op == '+')
{
    printf("sum = %d",num1+num2);
    }
    else if(op == '-')
{
    printf("minus = %d",num1-num2);
    }
    else if(op == '*')
{
    printf("multiple = %d",num1*num2);
    }
    else if(op == '/')
{
    printf("devid is %d",num1/num2);
    }
    else
    {
        printf("invailed input");
    }

return 0;
}
