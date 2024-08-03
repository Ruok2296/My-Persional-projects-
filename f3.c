#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("txt.txt", "a");
    int num = 423;
    fprintf(ptr,"%d",num);
    fclose(ptr);
    return 0;
}
