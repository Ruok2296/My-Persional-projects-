#include<stdio.h>
int main()
{
    char word[50];

    printf("give me the word : ");
    scanf("%s",&word);
    int i=0;
    while(word[i]!= '\0') {
        i++;
    }

    if (i >= 8) {
        int j = i -2;
        printf("%c%d%c",word[0],j,word[i-1]);
    } else {
        printf("yes");
    }


    return 0;

}
