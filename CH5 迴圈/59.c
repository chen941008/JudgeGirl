#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
long int reverse(long int n){
    long int result=0;
    while (n>0){
        result=result*10+n%10;
        n/=10;
    }
    return result;
}
int main(){
    long int n,times;
    scanf("%ld",&times);
    while (times--){
        bool is_overflow=false;
        long int sum,reverse_sum=0,run_time=0;
        scanf("%ld",&sum);
        do{
            run_time++;
            reverse_sum=reverse(sum);
            sum+=reverse_sum;
            if(sum>INT_MAX||reverse_sum>INT_MAX){
                printf("overflow!\n");
                is_overflow=true;
                break;
            }
        } while (sum!=reverse(sum));
        if(!is_overflow){
            printf("%ld %ld\n",run_time,sum);
        }
    }
}