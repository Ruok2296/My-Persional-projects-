#include <stdio.h>
typedef struct inf{

int age ;

}v;
int main() {
    v a;
    v *ptr= &a;;

    a.age = 34;

    printf("%d",ptr->age);
    return 0;
}
