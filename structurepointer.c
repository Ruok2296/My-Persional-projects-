#include <stdio.h>
 struct empl{
int age;
} ;
int main() {
    typedef struct empl emp;
    emp e ;
    e.age = 23;
    printf("%d",e.age);
    return 0;
}
