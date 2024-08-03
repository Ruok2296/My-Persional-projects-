#include <stdio.h>
 typedef  struct employe {
int age ;
int salaey;


} emp;
int main() {
   emp e;
   emp *ptr = &e;
   e.age = 34;
   e.salaey = 5645;
   printf("%d\n",ptr->age);
   printf("%d",ptr->salaey);
    return 0;
}
