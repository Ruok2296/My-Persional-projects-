#include<stdio.h>
int main(){
 int num;
 printf("give me a number <:");
 scanf("%d",&num);
for(int i = 1;i< num;){

    if(i*i == num){
        printf("the squre root is %d",i);
        break;
    }else{
    i++;

    }

}



return 0;
}
