#include<stdio.h>
int main( )
{
    int i,j,e;
    int count = 0;
    printf("give me the first num :");
    scanf("%d",&i);
    printf("give me the ending number :");
    scanf("%d",&e);
    for(;i <= e/2;i++){
       for(j =2;j < i;j++){

        if(i%j == 0){
            count++;
            break;
        }

       }
       if(count==0){
        printf("this is a prime number %d the sum = %d\n",i,i+i);

       }else{
       printf("this is not a prime number %d\n",i);
       }

    }


return 0;
}
