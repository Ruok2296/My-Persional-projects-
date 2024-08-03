#include <stdio.h>
#include<string.h>
struct employe
{

    int age ;
    int salary;
    char  name[50];

};


int main()
{
    struct employe e1;
    e1.age = 10;
    struct employe *ptr = &e1;

    printf("%d",(*ptr).age);
    return 0;
}
