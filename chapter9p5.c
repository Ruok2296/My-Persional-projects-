#include <stdio.h>
#include<math.h>
struct comp{
    int real;
int com;

};
int main() {
    struct comp n1 = {1,2};
    printf("%d + i%d ",n1.real,n1.com);

    return 0;
}
