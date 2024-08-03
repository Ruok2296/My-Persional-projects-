#include <stdio.h>

int main() {
FILE *ptr ;
ptr = fopen("rupok.txt","r");
int num;
fscanf(ptr,"%d", &num);
printf("the valuse of num is %d\n",num);
fscanf(ptr,"%d", &num);
printf("the valuse of num is %d\n",num);
fclose(ptr);
    return 0;
}
