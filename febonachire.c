#include<stdio.h>
int feb (int n){
if(n == 1){
    return 1;
}else if(n ==0){
    return 0;
}else{
return feb(n-1)+feb(n-2);
}


}
int main(){
    int n;
printf("enter the number of terms >");
scanf("%d",&n);
printf("the febonacci >>");
for (int i = 0;i <n;i++){
    printf("%d,",feb(i));
}


return 0;
}
