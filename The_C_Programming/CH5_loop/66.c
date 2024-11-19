#include <stdio.h>
int main(){
    int times;
    scanf("%d",&times);
    while (times--){
        int empty_bottles,empty_bottles_found,required_to_buy,empty,result=0;
        scanf("%d%d%d",&empty_bottles,&empty_bottles_found,&required_to_buy);
        empty=empty_bottles+empty_bottles_found;
        while (empty>=required_to_buy){
            result+=empty/required_to_buy;
            empty=empty/required_to_buy+empty%required_to_buy;
        }
        printf("%d\n",result);
    }
}