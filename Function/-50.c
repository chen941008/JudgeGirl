#include <stdio.h>
#include <stdbool.h>
bool grid[20000][20000]={false};
int main(){
    int pos[2][2]={0},area=0;
    for(int i=0;i<3;i++){
        for(int i=0;i<2;i++){
            scanf("%d%d",&pos[i][0],&pos[i][1]);
        }
        for(int i=pos[0][0];i<=pos[1][0]-1;i++){
            for(int j=pos[0][1];j<=pos[1][1]-1;j++){
                grid[i][j]=true;
            }
        }
    }
    for(int i=0;i<20000;i++){
        for(int j=0;j<20000;j++){
            if(grid[i][j]==true)area++;
        }
    }
    printf("%d\n",area);
}