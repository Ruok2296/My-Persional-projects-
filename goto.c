#include<stdio.h>
int main(){


  for(int j = 0;j < 8;j++){
    for(int i = 8;i> 0;i--){
            printf("%d i %d j",i,j);
        if(i == 5)

            goto rep;
    }
        rep:
            break;
  }







}
