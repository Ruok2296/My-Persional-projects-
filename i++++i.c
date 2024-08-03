#include <stdio.h>

int main() {
int i,j;
const int i = 9 ;
j = i+1;
int k = ++i;
i = 9;
int l = i++;
printf("i j k l is : %d %d %d %d %d",i,j,k,l,i);
    return 0;
}
