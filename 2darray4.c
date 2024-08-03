#include <stdio.h>

int main() {
int a [2][2]={{2,5},{3,5}};
for (int i = 0;i<2;i++)
{
    for(int j = 0;j<2;j++)
    {
        printf(" the %d,%d th numbers are %d %d\n",a[i][j],a[i][j]);

    }
}
    return 0;
}
