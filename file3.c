#include<stdio.h>
int main(){

FILE *ftr;
ftr = fopen("rupok3.txt","w");
int num = 432;
fprintf("ftr","%d",num);
fclose(ftr);


return 0;}
