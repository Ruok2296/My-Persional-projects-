#include <stdio.h>

int main() {
FILE *fptr;
fptr = fopen("rupok2.txt","w");
int num = 2;
fprintf(fptr,"%d",num);
fclose(fptr);
    return 0;
}
