#include <stdio.h>

int main()
{
    FILE *p = fopen("ptext.text","r");
    FILE *k = fopen("p.text","w");
    char n;


    while(1)
    {
        fscanf(p,"%c",&n) ;
        fprintf(k,"%c",n);
        if(n == EOF)
        {
            break;
        }
fclose(p);fclose(k);
    }
    return 0;


