#include "lcs_dp.h"
int max(int a,int b) {
    if (a>b)return a;
    return b;
}
int lcs(int* text1, int* text2, int m, int n) {
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0||j==0)dp[i][j]=0;
            else if(text1[i-1]==text2[j-1])dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[m][n];
}
void int_to_array(int* array1, int value, int index) {
    for(int i=0;i<index;i++){
        array1[i]=value%10;
        value/=10;
    }
}