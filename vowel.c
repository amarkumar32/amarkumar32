#include<stdio.h>

void main(){
char in;
printf("enter a character \n");
scanf("%d",&in);

if(in == 'a'||in== 'i'||in== 'u'){
    printf("its a vowel");

}
else{
    printf("its not a vowel");
}

return 0;
}