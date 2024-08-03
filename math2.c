#include<stdio.h>
int main(){

int num1;
int count = 0;
printf("enter a numnber :");
scanf("%d",&num1);

for(int i = 2;i < num1;i++){
    if(num1%i == 0){
      count++;
        break;
    }
}

if(!count){
   printf("the number is prime ");

}else{ printf("the number is not prime ");

}
return 0;
}
