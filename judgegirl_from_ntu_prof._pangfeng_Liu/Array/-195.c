#include <stdio.h>
#include <stdbool.h>
bool check_board(int board[3][3]){
    for(int i=0;i<3;i++){
        if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][0]!=0)return true;
        if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[0][i]!=0)return true;
    }
    if(board[0][0]==board[1][1]&&board[2][2]==board[1][1]&&board[0][0]!=0)return true;
    if(board[2][0]==board[1][1]&&board[0][2]==board[1][1]&&board[2][0]!=0)return true;
    return false;
}
int main(){
    int n,board[3][3]={0};//black for 1,white for 2
    scanf("%d",&n);
    int n_copy=n;
    for(int i=0;i<n&&i<9;i++){
        int x,y;
        while (n_copy--)
        {
            scanf("%d%d",&x,&y);
            if(x<0||x>2||y<0||y>2)continue;
            if(board[x][y]==0){
                board[x][y]=i%2+1;
                break;
            }
        }
        if(check_board(board)){
            if(i%2==0){
                printf("Black wins.\n");
                return 0;
            }
            else{
                printf("White wins.\n");
                return 0;
            }
        }
    }
    printf("There is a draw.\n");
    return 0;
}