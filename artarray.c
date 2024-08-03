#include <stdio.h>
void rec(int n,int last);
void recl(int n,int last,int k);

int main()
{
    printf(" ");
    printf("rupok");
    printf("\n");
    int n = 5;
    int k =2;
    int last =5;
for(int i = 0; i<4;i++){
    rec(n,last);
    printf("rupok");
    k--;
    printf("\n");
    recl(i,last,k);
printf("rupok");
}



    return 0;
}
void rec(int n,int last)
{

    for(int i = 1; i<n-2; i++) {

        if(i == last-1) {
            break;

        }
        printf(" ");
    }

}
void recl(int n,int last,int k)
{
    for(int i =1; i <n-k; i++) {
        if(i == last) {
            break;

        }
        printf(" ");

    }


}
