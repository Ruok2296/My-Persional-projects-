#include <stdio.h>

int main() {
int x ;
scanf("%d",&x);
for(float i = 0.0;i<x/2.0;){
    if(i*i == x){
        printf("the squre root is %f",i);
        break;
    }else{
        continue;
    }
}
    return 0;
}
