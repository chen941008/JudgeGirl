#include <stdio.h>
#include <ctype.h>
int main(){
    char input;
    int sum=0;
    while ((input=getchar())!='\n'&&input!=EOF){
        input=toupper(input);
        if(input=='A'||input=='E'||input=='I'||input=='O'||input=='U')sum++;
    }
    printf("%d\n",sum);
}