#include <stdio.h>
int or(int ar[],int x){
for(int i = 0;i<x;i++){
   printf("%d ",ar[i]);
}}
int re(int ar[],int x){
for(int j = x-1;j>=0;j--){
    printf("%d ",ar[j]);
}
}

int main() {
int ar[]={1,2,3,4,5,6,2,6,7};
int x = sizeof(ar)/sizeof(ar[0]);
or(ar,x);

printf("\n");
re(ar,x);
    return 0;
}
