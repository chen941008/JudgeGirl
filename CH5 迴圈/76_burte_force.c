#include <stdio.h>
int main(){
    int n;
    while (scanf("%d",&n)!=EOF)
    {

        long long sum=-1,line=(n+1)/2;
        for(long long int i=1;i<=line;i++){
            for(long long int j=1;j<=i*2-1;j++){
                sum+=2;
            }
        }
        printf("%lld\n",(sum-2)*3);
    }
}