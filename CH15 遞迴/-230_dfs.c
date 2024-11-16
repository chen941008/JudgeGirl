#include <stdio.h>
int bag[20][2]={0},n,w;

int big(int a,int b){
    return a > b ? a : b;
}

int dfs(int i,int current_w,int value){
    if (current_w>w)return 0;
    if(i==n)return value;
    return big(dfs(i+1,current_w+bag[i][0],value+bag[i][1]),
                 dfs(i+1,current_w,value));
}

int main(){
    scanf("%d%d",&n,&w);
    for(int i=0;i<n;i++){
        scanf("%d%d",&bag[i][0],&bag[i][1]);
    }
    printf("%d",dfs(0,0,0));
}