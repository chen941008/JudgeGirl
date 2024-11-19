#include <stdio.h>
#include <stdbool.h>
void check_detector(int r,int c,int board[17][17]){
    for(int i=r-1;i<=r+1;i++){
        for(int j=c-1;j<=c+1;j++){
            if(i==r&&j==c)continue;
            if(board[i][j]==5){
                board[i][j]=-1;
            }
        }
    }
}
bool check_boom(int r,int c,int board[17][17]){
    for(int i=r-1;i<=r+1;i++){
        for(int j=c-1;j<=c+1;j++){
            if(board[i][j]==5){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int board[17][17]={0},r,c;
    scanf("%d%d",&r,&c);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            scanf("%d",&board[i][j]);
        }
    }
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(board[i][j]==5||board[i][j]==-1){
                check_detector(i,j,board);
            }
        }
    }
    int not_detected=0,detected=0;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(board[i][j]==1){
                if(check_boom(i,j,board))detected++;
                else not_detected++;
            }
        }
    }
    printf("%d %d\n",detected,not_detected);
}