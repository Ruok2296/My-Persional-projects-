#include <stdio.h>
#include<string.h>
struct student
{
    int age ;
    int roll;
    char name[50];

};
int main()

{
    int n,m;
    char nam[50];
    fgets(nam);

    struct student rupok;
   // scanf("%d %d",&n,&m);
    //rupok.age = n;
   // rupok.roll =m;
   scanf("%d %d",&rupok.age , &rupok.roll);
    strcpy(rupok.name,nam);
    printf("the name is %s\n the age is %d\n the roll is %d",rupok.name,rupok.age,rupok.roll);
}
