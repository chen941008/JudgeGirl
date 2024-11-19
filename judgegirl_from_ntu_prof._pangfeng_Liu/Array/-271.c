#include <stdio.h>
int main(){
    long long int n,m,n_coefficients[100]={0},m_coefficients[100]={0},result[10000]={0};
    scanf("%lld",&n);
    for(int i=0;i<n;i++){
        scanf("%lld",&n_coefficients[i]);
    }
    scanf("%lld",&m);
    for(int i=0;i<m;i++){
        scanf("%lld",&m_coefficients[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            result[n-i+m-j-2]+=n_coefficients[i]*m_coefficients[j];
        }

    }
    for(int i=n+m-2;i>=0;i--){
        if(i==0)printf("%lld",result[i]);
        else printf("%lld ",result[i]);
    }
}
