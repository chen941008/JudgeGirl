#include <stdio.h>
#include <stdbool.h>
int main(){
    long long int n,m;
    while ((scanf("%lld%lld",&n,&m)!=EOF)){
        bool is_boring=false;
        long long int result[64]={0},count=0;
        result[count++]=n;
        if(n<=1||m<=1){
            printf("Boring!\n");
            continue;
        }
        while (n>1){
            if(n%m!=0){
                printf("Boring!\n");
                is_boring=true;
                break;
            }
            n/=m;
            result[count++]=n;
        }
        if(!is_boring){
            for(int i=0;i<count;i++){
                if(i==count-1)printf("%lld\n",result[i]);
                else printf("%lld ",result[i]);
            }
        }
    }
}