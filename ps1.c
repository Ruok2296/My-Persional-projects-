#include <stdio.h>
int sum(int *x,int *y){
return *x+*y;
}
float avg(int *x, int *y){
return (*x+*y)/2.0;
}
int main() {
    int x = 4,y = 3;
    printf("the sum is %d",sum(&x,&y));
    printf("the avarage is %f",avg(&x,&y));
    return 0;
}
