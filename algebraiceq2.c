#include <stdio.h>

int main() {
int a1 = 2,b1 =3,c1 = 4;
int a2 = 5,b2 = -5,c2 = 5;
/*
printf("a1?");
scanf("%d",&a1);
printf("b1?");
scanf("%d",&b1);
printf("c1?");
scanf("%d",&c1);

printf("a2?");
scanf("%d",&a2);//(float)
printf("b2?");
scanf("%d",&b2);
printf("c2?");
scanf("%d",&c2);
*/
float y =((a2*c1)-(a1*c2))/(a2*(a1-b1)-a1*(a2+b2));
printf("y = %f",y);


    return 0;
}
