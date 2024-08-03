#include <stdio.h>

int main() {
    FILE *ptr;
ptr = fopen("rupok2.txt","r");
    char  c = fgetc(ptr);
    fputc('c',c);
    printf("%c", c);
    return 0;
}
