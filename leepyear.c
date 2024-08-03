#include<stdio.h>
int main(){
int year;

printf("give me the year :");
scanf("%d",&year);

if(year % 4 == 0){
    printf("the year is a leep year ");
}else if (year%4== 0 && year & 100!= 0){
    printf("the year is a leep year");
}else{
    printf("the year is not a leep year ");
}




return 0;
}
