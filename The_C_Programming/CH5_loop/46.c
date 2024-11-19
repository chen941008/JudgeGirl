#include <stdio.h>
#include <stdbool.h>
bool is_armstrong_number(long long int n){
    long long int digit_sum=0,copy_n=n;
    while (n>0){
        digit_sum+=(n%10)*(n%10)*(n%10);
        n/=10;
    }
    if(copy_n==digit_sum)return true;
    return false;
}
int main(){
    long long int lower_bound,upper_bound;
    while (scanf("%lld%lld",&lower_bound,&upper_bound)){
        bool have_armstrong_number=false;
        if(!(lower_bound&&upper_bound))break;
        for(long long int i=lower_bound;i<=upper_bound;i++){
            if(is_armstrong_number(i)){
                have_armstrong_number=true;
                break;
            }
        }
        if(have_armstrong_number){
            printf("有\n");
        }
        else {
            printf("無\n");
        }
    }
}