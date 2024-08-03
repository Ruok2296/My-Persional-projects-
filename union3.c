#include <stdio.h>
union data{
    float real;

}data;
void call(union data*data1){
data1->real = 55.5;
printf("in function is %.2f\n",data1->real);

}
int main() {
    data.real = 44.5;
    printf("real before function is %.2f\n",data.real);
    call(&data);
    printf("real after caling is %.2f\n",data.real);

    return 0;
}
