#include <stdio.h>

int main() {
int n[4]={1,2,3,4,5};
int n1;
int count =0;
scanf("%d",&n1);

for(int i = 0; i<5;i++){
    if(n1 == n[i]){
        printf("it is in %d",i);
        count++;
    }
}
if(count == 0){
    printf("number not here");
}

    return 0;
}
