#include <stdio.h>
int main(){
    int times,result=0,input;
    scanf("%d",&times);
    while (times--){
        scanf("%d",&input);
        result=result^input;
    }
    printf("%d\n",result);
}