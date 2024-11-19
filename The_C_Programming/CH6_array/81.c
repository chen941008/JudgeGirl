#include <stdio.h>
int main(){
    int times;
    scanf("%d",&times);
    while (times--){
        int list[1000]={0},len,sum=0;
        scanf("%d",&len);
        for(int i=0;i<len;i++){
            scanf("%d",&list[i]);
            for(int j=0;j<i;j++){
                if(list[i]>=list[j]){
                    sum++;
                }
            }
        }
        printf("%d\n",sum);
    }
    
}