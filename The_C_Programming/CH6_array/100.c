#include <stdio.h>
int main(){
    int input[6][6]={0},ans[4][4]={0};
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            scanf("%d",&input[i][j]);
        }
    }
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            int count=0;
            if(input[i][j]==-1){
                ans[i-1][j-1]=-1;
                continue;
            }
            for(int k=i-1;k<=i+1;k++){
                for(int t=j-1;t<=j+1;t++){
                   if(input[k][t]==-1)count++;
                }
            }
            ans[i-1][j-1]=count;
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(j==3)printf("%d",ans[i][j]);
            else printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
}