#include <stdio.h>
#include <ctype.h>
int main(){
    char input;
    scanf(" %c",&input);
    input=toupper(input);
    if(input<'A'||input>'Z'){
        printf("not English.");
    }
    else if(input=='A'){
        printf("the first.");
    }
    else if(input=='Z'){
        printf("the last.");
    }
    else{
        printf("%c%c",input-1,input+1);
    }
    printf("\n");
}