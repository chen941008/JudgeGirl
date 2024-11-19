#include <stdio.h>
int main(){
    int money,coin=1000,count=0;
    scanf("%d",&money);
    if(money<0){
        printf("error\n");
        return 0;
    }
    while (coin>0){
        if(money/coin!=0){
            printf("%d: %d\n",coin,money/coin);
            money=money%coin;
        }
        if(count%2==0){
            coin/=2;
        }
        else{
            coin/=5;
        }
        count++;
    }
}
    