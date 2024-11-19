#include <stdio.h>
int main(){
    int times;
    scanf("%d",&times);
    while (times--){
        long long int start,end,delta,sum=0,count_step=0,step_len=1;
        scanf("%lld%lld",&start,&end);
        delta=end-start;
        while (sum<delta){
            count_step++;
            sum += step_len;
            // 每走兩步才增加步長
            if (count_step % 2 == 0) {
                step_len++;
            }
        }
        printf("%lld\n",count_step);
    }
}