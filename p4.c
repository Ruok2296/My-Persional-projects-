
/*#include <stdio.h>
int sum(int n ){
    if(n == 1){
        return 1;
    }
return sum(n-1)+n;
}
int main() {
    int n = 5;
    printf("the sum of 5 the natural numbers %d",sum(n));
    return 0;
}*/
#include <stdio.h>
int net(int a);
int net(int a){
    if( a== 1 ){
        return 1;
    }
    return net(a-1)+a;

}


int main() {
int n;
printf("the number of numbers :");
scanf("%d",&n);
printf("the sum of natral n th number is %d",net(n));
    return 0;
}
