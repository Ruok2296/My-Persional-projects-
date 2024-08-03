
#include <stdio.h>
#include<stdlib.h>
int main() {
    int *ptr;
    int n =7 ;
     int m ;
    scanf("%d",&m);
    ptr = (int*)malloc(m*sizeof(int));
    for(int i = 0;i <= m;i++){
        ptr[i]= n*i;
        printf("%d\n",ptr[i]);
    }


    return 0;
}
