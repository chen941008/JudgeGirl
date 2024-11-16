#include <stdio.h>
#include <ctype.h>
int main(){
    int character[26]={0};
    char input[101]={0};
    scanf("%s",input);
    for(int i=0;input[i]!='\0';i++){
        input[i]=toupper(input[i]);
        if(input[i]>=65&&input[i]<=90){
            character[input[i]-'A']++;
        }
    }
    for(int i=0;i<26;i++){
        printf("%d\n",character[i]);
    }
}