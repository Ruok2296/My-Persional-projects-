#include <stdio.h>

int main() {
char i = 'A';

char *j = &i;
char *v =&j;
float k = 5.32;
float *k1 = &k;
printf("the addrase of i is %u\n",&i);
printf("the addrase of i is %p\n",j);
printf("the addrase of k is %p\n",&k);
printf("the addrase of k is %p\n",k1);
printf("the addrase of j is %p\n",v);
printf("the value of j is %d",*(&j));
    return 0;
}
