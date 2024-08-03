#include <stdio.h>

int main() {

int a[5] ={1,2,3,4,5};
for(int i = 0;i<=4;i++){

    printf("%d ",a[i]);

}printf("\n");
int temp;

for(int i = 0;i<5/2;i++){

temp = a[i];
a[i]=a[5-1-i];
a[5-1-i]=temp;


}
for(int i = 0;i<=4;i++){

    printf("%d ",a[i]);

}



    return 0;
}
