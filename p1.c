#include<stdio.h>
float avg(float a,float b,float c);
int main(){
 float a =3.00;
 float b = 4.00;
 float c = 6.00;
float x = avg(a,b,c);

printf("the avarage is %f",x);

return 0;
}
float avg(float a,float b,float c){
float x =(a+b+c)/3;
return x;
}

