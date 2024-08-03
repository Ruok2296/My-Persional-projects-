#include <stdio.h>
void rep(void){
 int i, j;
 for (i = 1; i <= 3; i++) {

        for (j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }
}
int main() {

rep();



    return 0;
}
