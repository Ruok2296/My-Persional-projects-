#include <stdio.h>

int rev(int i){

return i;
}
int main() {
  int a[6]={1,2,3,4,5,6};
  for (int j = 5;j>=0;j--){
        int k = a[j];
    printf("the reversed element is %d\n",rev(k));

  }

    return 0;
}
