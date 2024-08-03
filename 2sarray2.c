#include <stdio.h>
void tdf(int an[][10],int n);
int main()
{
    int rupok [1][10] = {1,2,3,4,5,6,7,8,9,10};
    int wife[2][10] = {{11,12,13,14,15,16,17,18,19,20},{21,22,23,24,25,26,27,28,29,30}};
    int child[3][10]= {{1,2,3,4,5,6,7,8,9,10},{11,12,13,14,15,16,17,18,19,20},{21,22,23,24,25,26,27,28,29,30}};

    printf("working with rupok array ....\n");
    tdf(rupok,1);
    printf("working with wife array ....\n");
    tdf(wife,2);
    printf("working with child array ....\n");
    tdf(child,3);


    return 0;
}
void tdf(int an[][10],int n)
{
    int x,y;
        for(x = 0;x<n;x++){
            for(y = 0;y<10;y++){
                printf("\t Value of element [%d][%d] is %d.",x,y,an[x][y]);
                printf("\n");
            }
        }
}
