#include <stdio.h>

int main()
{
    char user[]="rupok is a good boy";
    int s = sizeof(user)/sizeof(user[0]);
    int as = s-1;
    printf("the size is %d\n",as);

    int word =1;

    int space =0;
    for(int i = 0; i <= as; i++)
    {
        if(user[i]==' ')
        {
            if(user[i+1]=='\0')
            {

                space++;
            }
            else
            {
                word++;
                space++;
            }
        }

    }
    int ch = as-space;
    printf("word = %d \nch = %d",word,ch);
    return 0;
}