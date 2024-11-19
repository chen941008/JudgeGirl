#include <stdio.h>
int check_around(int arr[6][6],int r,int c){
    int count=0;
    for(int i=r-1;i<=r+1;i++){
        for(int j=c-1;j<=c+1;j++){
            if(arr[i][j]==-1){
                count++;
            }
        }
    }
    return count;
}
int main(){
    int grid[6][6]={0};
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            scanf("%d",&grid[i][j]);
        }
    }
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            if(grid[i][j]==0){
                grid[i][j]+=check_around(grid,i,j);
            }
            if(j==4){
                printf("%d\n",grid[i][j]);
            }
            else{
                printf("%d ",grid[i][j]);
            }
        }
    }
}