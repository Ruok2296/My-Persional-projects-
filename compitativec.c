#include<stdio.h>
int main (){
 int a[] = {1,3,5,6,6,3,1};
 int x = sizeof(a)/sizeof(a[0]);
 int i,found;
for(int i = 0;i <= x;i++){
found = 0;
    for(int y = 0;y < x;y++){
        if( i !=y && a[i]==a[y]){
                found=1;

            break;
        }
        }
if(!found){
    printf("%d",a[i]);
    break;
}

}


return 0;

}
