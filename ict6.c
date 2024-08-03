#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d %d %d\n",a,b,c);
    if(a+b > c && a > 0 && b>0 && c>0)
    {
        float s = (a+b+c)/2.0;
        float area =sqrt(s*((s-a)*(s-b)*(s-c)))/2.0;
        printf("%f",area);
    }
    else
    {
        printf("nonvalid num!");
    }
    return 0;
}
