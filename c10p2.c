#include <stdio.h>

int main() {
    FILE *pr;
    int num ;
    scanf("%d",&num);
    pr = fopen("ptext.text","w");
    for(int i = 0 ;i < 10;i++){
        fprintf(pr,"%d\n",num*(i+1));
    }fclose(ptr);
    return 0;
}
