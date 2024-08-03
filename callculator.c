#include <stdio.h>

int main() {
int n1,n2;char m;
scanf("%d%d",&n1,&n2);
//
getc(m);
printf("%d%d",n1,n2);

if(m == '+'){
    printf("%d",n1+n2);
}else if ( m == '-'){
    printf("%d",n1-n2);
}else if(m == '*'){
    printf("%d",n1*n2);
}else if (m == '/'){
    printf("%d",n1/n2);
}
    return 0;
}
