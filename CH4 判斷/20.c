#include <stdio.h>
int main(){
    char input[4];
    scanf("%s",input);
    if(input[0]=='-'){
        printf("%c",((input[2]-'A')-(input[1]-'0')+26)%26+'A');
    }
    else{
        printf("%c",((input[2]-'A')+(input[1]-'0')+26)%26+'A');
    }
}