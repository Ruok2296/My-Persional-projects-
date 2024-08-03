#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int p;
    printf("0 > rock;1 > paper;2 > sezer\n");
    scanf("%d",&p);
    srand(time(0));
    int b = rand()%3;
    while(p > 2)
    {

        printf("pease enter a valid number \n");
        scanf("%d",&p);
    }
    printf("bot is %d\n",b);

    if(p == b)
    {
        printf("tie");
    }
    else if ( p == 0 && b == 1 )
    {
        printf("bot win");
    }
    else if ( p == 0 && b == 2)
    {
        printf("you win");
    }
    else if (p == 1 && b == 0)
    {
        printf("bot win");
    }
    else if (p == 1 && b == 2)
    {
        printf("bot win");
    }
    else if (p == 2 && b == 0)
    {
        printf("bot win");
    }
    else if (p == 2 && b == 1)
    {
        printf("you win");
    }
//0 rock 1 paper 2 sezr
// me - 0


    return 0;
}



