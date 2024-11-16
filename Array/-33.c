#include <stdio.h>
int main(){
    int n,road[102][102]={0},condition[4]={0};//0_intersection 1_T-junction 2_turn 3_dead end 
    scanf("%d",&n);
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            scanf("%d",&road[i][j]);
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            int count=0;
            if(road[i][j]==1){
                if(road[i+1][j]==1)count++;
                if(road[i-1][j]==1)count++;
                if(road[i][j+1]==1)count++;
                if(road[i][j-1]==1)count++;
                if(count==4)condition[0]++;
                else if(count==3)condition[1]++;
                else if(count==2){
                    if (!((road[i+1][j] == 1 && road[i-1][j] == 1) || 
                        (road[i][j+1] == 1 && road[i][j-1] == 1))) {
                        condition[2]++; // 轉角
                    }
                }
                else if (count==1)condition[3]++;    
            }
            
        }
    }
    for(int i=0;i<4;i++){
        if(i==3)printf("%d",condition[i]);
        else printf("%d\n",condition[i]);
    }
}