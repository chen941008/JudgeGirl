#include <stdio.h>
#include <stdbool.h>
bool is_perfect_number(long long int n){
    long long int factor_sum=1;
    for(long long int i=2;i*i<=n;i++){
        if(i*i==n){
            factor_sum+=i;
        }
        else if(n%i==0){
            factor_sum+=i+n/i;
        }
    }
    if(n==factor_sum)return true;
    return false;
}
int main(){
    long long int N;
    bool first=true;
    scanf("%lld",&N);
    for(long long int i=2;i<=N;i++){
        if(is_perfect_number(i)){
            if(first){
                first=false;
                printf("%lld",i);
            }
            else{
                printf(" %lld",i);
            }
        }
    }
    printf("\n");
}