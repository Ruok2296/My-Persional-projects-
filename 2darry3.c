#include <stdio.h>

int main() {
int a[26][26]= {{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26},
                        {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26}};

for (int i = 0;i<26;i++)
{
    for(int j = 0;j<26;j++)
    {
        printf("the %d,%d the elements are %d %d\n",i,j,a[i][j],a[i][j]);

    }
}
/*
for (int i = 0;i<26;i++)
{
    for(int j = 0;j<26;j++)
    {
        printf(" the %d,%d the elements are %d %d\n",i,j,a[i][j],a[i][j]);

    }
}*/
    return 0;
}
//char s = ""
