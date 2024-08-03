#include <stdio.h>
float con(float x){
float j = ((x*9)/5) +32;
return j;
}
int main() {
    float c1 = 90;
    float f  = con(c1);
    printf("the farhinhite is %f",f);
    return 0;
}
