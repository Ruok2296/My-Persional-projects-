#include <stdio.h>
int pos(int a[],int n){
    int positive=0;
for(int i = 0;i <n;i++){
    if (a[i] >0){
            positive++;
}

}
return positive;
}
int main() {
    int positive = 0;
    int negative = 0;
        int a []={-1,2,3,-5,4};
         int x = sizeof(a) / sizeof(a[0]);

            printf("the number of positive is %d\n ",pos(a,x));
    return 0;
}
