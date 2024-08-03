#include <stdio.h>

int main()
{
    int stat,end;
    printf("give me the staring point :");
    scanf("%d",&stat);
    printf("give me the ending point :");
    scanf("%d",&end);
    int count = 0;

    for(int i = stat; i<=end; i++)
    {
        for(int j = 2; j <i; j++)
        {
            if(i%j == 0)
            {
                count++;
            }
        }
        if(count != 0)
        {
            printf("%d is not prime \n",i);

        }
        else
        {
            printf("%d is prime \n",i);
        }
        count = 0;

    }
    return 0;
}
