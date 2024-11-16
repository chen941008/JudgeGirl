#include <stdio.h>
int main(){
    char input[5];
    scanf("%s",input);
    for(int i=0;i<4;i++){
        int count=1;
        if(input[i]!='0'){
            for(int j=i+1;j<4;j++){
                if(input[i]==input[j]){
                    input[j]='0';
                    count++;
                }
            }
            printf("%d%c",count,input[i]);
        }
    }
}