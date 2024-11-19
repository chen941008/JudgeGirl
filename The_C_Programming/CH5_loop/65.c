#include <stdio.h>

int main(){
    long long int num1,num2;
    while (1)
    {
        scanf("%lld%lld",&num1,&num2);
        if(!(num1&&num2))break;
        printf("%lld\n",num2/5-num1/5+1);
    }
}