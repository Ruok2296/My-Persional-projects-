#include<stdio.h>
union data_type{
    char ch;
    int intgr;
    float real;
}data;
void get_union(union data_type*);

int main()
{
    data.real = 55.5;
    printf("Value of real number in main(),before calling get_union(): %.2f\n",data.real);
    get_union(&data);
    printf("Value of real number in main(),after calling get_union():%.2f",data.real);

}
void get_union(union data_type*data1)
{
    data1->real = 90.5;
    printf("Value of real number in gry_union () :%.2f\n",data.real);

}
