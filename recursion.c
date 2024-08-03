#include<stdio.h>
#include<math.h>
int fact(int n);

int main(){
int num ;
printf("give me any number :");
scanf("%d",&num);
printf("the factorial is %d ",fact(num));

return 0;
}
int fact(int n){
if(n == 1 || n == 0){

     return 1;

}
return fact(n - 1) * n;

}
