#include <stdio.h>

int main()
{
    char input;
    scanf("%c",&input);
    int vowl =0;
    int con= 0;
    char vow[11]="AEIOUaeiou";
    for (int i = 0; i <11; i++)
    {
        if(input==vow[i])
        {d
            vowl++;
            break;
        }
        else
        {
            continue;
        }

    }
    if(vowl == 0)
    {
        printf("the char is a consunent");

    }
    else
    {
        printf("the char is a vowel");
    }

    return 0;
}
