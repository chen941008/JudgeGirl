#include <stdio.h>
long long int fac(long long int n) {
    if(n==1||n==0)return 1;
    return n*fac(n-1);
}
long long int combination(long long int n,long long  int k){
    return fac(n)/(fac(k)*fac(n-k));
}

int main(){
    long long int n,m,sum=0;
    scanf("%lld%lld",&n,&m);
    for(long long int i=0;i<=m;i++){
        sum+=combination(n,i);
    }
    printf("%lld",sum);
}