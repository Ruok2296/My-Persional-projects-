#include <stdio.h>

int main()
{
    FILE *ptr ;
    ptr = fopen("rupok2.txt","r");
    if (ptr == NULL){
        printf("the file dosent exist");
    }else{
    int num;
    fscanf(ptr,"%d", &num);
    printf("the valuse of num is %d\n",num);
    fscanf(ptr,"%d", &num);
    printf("the valuse of num is %d\n",num);
    fclose(ptr);
  }  return 0;
}
