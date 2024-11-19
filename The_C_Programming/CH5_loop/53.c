#include <stdio.h>
int main(){
    int times;
    scanf("%d",&times);
    while (times--){
        int result,empty=0;
        scanf("%d",&result);
        empty=result;
        while (empty>=2){
            if(empty==2){
                result++;
                empty=0;
            }
            result+=empty/3;
            empty=empty%3+empty/3;
        }
        printf("%d\n",result);
    }
}