#include <stdio.h>

int main()
{
    char user[50];
    gets(user);
    int numc = 0;
    int k =0;

    while(user[k] != '\0'){
        k++;
    }

    printf("the size is %d\n",k);

    int word =1;

    int space =0;
    for(int i = 0; i <= k; i++)
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
    int ch = k-space;
    printf("word = %d \nch = %d",word,ch);
    return 0;
}
