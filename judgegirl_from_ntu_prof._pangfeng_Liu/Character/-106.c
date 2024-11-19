#include <stdio.h>
#include <stdlib.h>
int main(){
    char input[1001]={0};
    while (scanf("%s",input)){
        if(input[0]=='-')break;
        int mod_2=0,mod_3=0,odd=0,even=0,mod_5=0,len=0;
        for(int i=0;input[i]!='\0';i++){
            mod_3+=(input[i]-'0');
            if(i%2==0){
                odd+=input[i]-'0';
            }
            else{
                even+=input[i]-'0';
            }
            len=i;
        }
        if((input[len]-'0')%2==0){
            printf("yes ");
        }
        else{
            printf("no ");
        }
        if(mod_3%3==0){
            printf("yes ");
        }
        else{
            printf("no ");
        }
        if((input[len]-'0')%5==0){
            printf("yes ");
        }
        else{
            printf("no ");
        }
        if(abs(even-odd)%11==0){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
        for(int i=0;input[i]!='\0';i++){
            input[i]='\0';
        }
    }
}