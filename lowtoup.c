#include<stdio.h>
int main(){
char chare;

printf("enter any  letter :");
scanf("%c",&chare);
if(chare > 65 && chare <90 ){
    printf("this charector is uper case ,the lower case is %c",chare+32);
} else if(chare > 97 && chare <122 ){
    printf("this charector is lower case ,the uper case is %c",chare-32);
}

}
