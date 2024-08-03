#include <stdio.h>

int main() {
    char ch;
     FILE *ptr;
    ptr = fopen("txt.txt", "r");
    while(1)
    {
        ch=fgetc(ptr);
        printf("%c",ch);
        if(ch != EOF)
        {
            continue;
        }else{
            break;
        }
    }
    return 0;
}
