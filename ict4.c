#include <stdio.h>

int main()
{
    int n1,n2;
    printf("give me two numbers :\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    int count =0;
    for(int i = 2; i <n1; i++)
    {
        if(n1%i == 0 && n2 %i == 0)
        {
            printf("the gcd is %d\n",i);
            break;
        }
        else
        {
            count++;
        }
    }

    if(count == n1-2)
    {
        printf("no gcd");
    }


    return 0;
}
