#include <stdio.h>
#include <stdlib.h>
int bag[21][2]={0},dp[21][10001]={0},n,w;
int big(int a,int b){
    return a > b ? a : b;
}
int main(){
    scanf("%d%d",&n,&w);
    for(int i=1;i<=n;i++){
        scanf("%d%d",&bag[i][0],&bag[i][1]);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=w;j++){
            dp[i][j] = dp[i - 1][j];
            if(j>=bag[i][0])
            dp[i][j]=big(dp[i][j],dp[i-1][j-bag[i][0]]+bag[i][1]);
        }
    }
    printf("%d\n",dp[n][w]);
}