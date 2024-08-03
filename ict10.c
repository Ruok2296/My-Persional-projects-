#include <stdio.h>

int main() {
    int n,i = 1,s = 0;
    printf("enter the value of total numbers :\n");
    scanf("%d",&n);
    while(i <= n)
    {
        s = s+i;
        i++;
    }
    printf("the sum of the toptal numbers id  %d",s);

    return 0;
}
