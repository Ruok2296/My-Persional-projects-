#include <stdio.h>
#include<stdlib.h>
int main() {
int n ;
scanf("%d",&n);
int sum = 0;

int *ptr = (int*)malloc(n* sizeof(int));
for(int i = 0; i<n;i++){
    scanf("%d",&ptr[i]);
    sum = ptr[i]+sum;
}
printf("%d",sum);
free(ptr);
    return 0;
}
