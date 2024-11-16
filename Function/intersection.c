#include <stdio.h>
#include "intersection.h"
void intersection(int map[100][100], int result[4]){//0_intersection 1_T-junction 2_turn 3_dead end 
    int road[102][102]={0};
    for(int i=1;i<101;i++){
        for(int j=1;j<101;j++){
            road[i][j]=map[i-1][j-1];
        }
    }
    for (int i = 0; i < 4; i++) {
        result[i] = 0;
    }
    for(int i=1;i<101;i++){
        for(int j=1;j<101;j++){
            int count=0;
            if(road[i][j]==1){
                if(road[i+1][j]==1)count++;
                if(road[i-1][j]==1)count++;
                if(road[i][j+1]==1)count++;
                if(road[i][j-1]==1)count++;
                if(count==4)result[0]++;
                else if(count==3)result[1]++;
                else if(count==2){
                    if (!((road[i+1][j] == 1 && road[i-1][j] == 1) || 
                        (road[i][j+1] == 1 && road[i][j-1] == 1))) {
                        result[2]++;// 轉角
                    }
                }
                else if (count==1)result[3]++;    
            }
            
        }
    }
    /*
    for(int i=0;i<4;i++){
        if(i==3)printf("%d",result[i]);
        else printf("%d\n",result[i]);
    }
    */
}