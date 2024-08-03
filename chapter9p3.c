#include <stdio.h>
struct inte{
int a ;
};
int main() {
    struct inte integer;
    integer.a = 20;
    printf("%d",integer.a);
    return 0;
}
