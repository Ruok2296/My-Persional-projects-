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
    struct employe facebook[100];
    facebook[0].age = 5;
    facebook[1].salary = 1251;
    char name[50];
    strcpy(name,"Rupok");
    strcpy(facebook[2].name,"Rupok");
    printf("the name is %s\n",facebook[2].name);
    printf("the age is %d\n",facebook[0].age);
    printf("the salary is %d\n",facebook[1].salary);
    return 0;
}
