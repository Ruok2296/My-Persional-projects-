#include<stdio.h>
int main(){
char che;
char vowel[]="aeiouAEIOU";

int vc = 0;
int cc = 0;
printf("give me a charector ");
scanf("%d",&che);
for(int i =0;i < 10;i++){
    if(che == vowel[i]){
printf("the cherector is a vowel\n");
break;}
else{
   continue;

}
}

}
