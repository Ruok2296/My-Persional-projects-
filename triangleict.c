#include <stdio.h>

int main() {
    int a ,b ,c;
    printf("give the sides of  a triangle :");
    scanf("%d %d %d",&a,&b,&c);
    int x = a+b;
    printf("hight is  %d width is %d oter is %d\n",a,b,c);
    if(x > c){
        printf("triangle");
    }else{
        printf("non triangla");
    }
    return 0;
}
