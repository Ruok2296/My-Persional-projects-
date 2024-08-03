#include<stdio.h>
int main(){
char name[50];
char vowel[11]="aeiouAEIOU";
printf("enter any your name :");
scanf("%s",&name);
int x =0;
while(name[x]!='\0'){
    x++;
}
printf("your namen is of %d cherecters\n",x);
int count = 0;
int j;//rupok           //aeiouAEIOU  r
for( j = 0;j <= x;j ++){
    for(int i = 0;i < 11;i++){
        if(name[j] == vowel[i]){
                rep:
        printf("the %c cher is a vowel\n",name[j]);
        break;

    }if(name[j]!=vowel[i]){
    do{
        i++;
    }while(name[i]!=vowel[i]);
        if(name[j] == vowel[i]){
            goto rep;
        }else{
        printf("the %c is consunemt\n",name[j]);
        }
    }

}

}
return 0;

}
