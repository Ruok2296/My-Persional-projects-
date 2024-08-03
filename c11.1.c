#include <stdio.h>
#include<stdlib.h>
int main() {
    int *ptr;
    int n ;
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    for(int i = 0;i <= n;i++){
        ptr[i]= i;
        printf("%d",ptr[i]);
    }
 ptr = (int*)malloc(n*sizeof(int));
printf("%d",ptr[2]);
    return 0;
}
