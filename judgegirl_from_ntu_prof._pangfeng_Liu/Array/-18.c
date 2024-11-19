#include <stdio.h>
int main(){
    long long int r,c,array[100][100]={0};
    scanf("%lld%lld",&r,&c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%lld",&array[i][j]);
        }
    }
    for(int i=0;i<r;i++){//先上到下再左到右
        for(int j=0;j<c;j++){
            if(i-1>=0 && array[i][j] <= array[i-1][j])continue;//左
            if(j-1>=0 && array[i][j] <= array[i][j-1])continue;//上
            if(i+1<r && array[i][j] <= array[i+1][j])continue;//右
            if(j+1<c && array[i][j] <= array[i][j+1])continue;//下
            printf("%lld\n", array[i][j]);//all pass印出
        }
    }
}