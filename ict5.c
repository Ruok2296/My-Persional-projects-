#include <stdio.h>

int main() {
int n1;
scanf("%d",&n1);
int a;
int d;
scanf("%d %d",&a,&d);
printf("%d %d %d\n",n1,a,d);
int sum =(n1/2.0)*(2*a+(n1-1)*d);
    printf("the sum is %d",sum);
    return 0;
}
