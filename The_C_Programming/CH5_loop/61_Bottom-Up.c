#include <stdio.h>
int main(){
    long long int n,m;
    while ((scanf("%lld%lld",&n,&m)!=EOF)){
        long long int m_copy=m;
        if(m<=1||n<=1){
            printf("Boring!\n");
            continue;
        }
        while (n>m){
            m*=m_copy;
        }
        if(n!=m)printf("Boring!\n");
        else {
            while (n>0)
            {
                if(n==1)printf("%lld\n",n);
                else printf("%lld ",n);
                n/=m_copy;
            } 
        }
    }
}