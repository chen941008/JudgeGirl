#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int n,m;
void insert(int player,int player_board[10][256][256],int current_num){
    bool is_found =false;
    for(int i=0;i<m;i++){
        if(is_found)break;
        for(int j=0;j<m;j++){
            if(player_board[player][i][j]==current_num){
                player_board[player][i][j]=-1;
                is_found=true;
                break;
            }
        }
    }
}
bool check_win(int player,int player_board[10][256][256],int current_num){
    bool is_win=false;
    for(int i=0;i<m;i++){
        is_win=true;
        for(int j=0;j<m;j++){
            if(player_board[player][i][j]!=-1){
                is_win=false;
                break;
            }
        }
        if(is_win)return true;
        is_win=true;
        for(int j=0;j<m;j++){
            is_win=true;
            if(player_board[player][j][i]!=-1){
                is_win=false;
                break;
            }
        }
        if(is_win)return true;
    }
    is_win=true;
    for(int i=0;i<m;i++){
        if(player_board[player][i][i]!=-1){
            is_win=false;
            break;
        }
    }
    if(is_win)return true;
    is_win=true;
    for(int i=0;i<m;i++){
        if(player_board[player][i][m-i-1]!=-1){
            is_win=false;
            break;
        }
    }
    if(is_win)return true;
    return false;
}
int main(){
    int player_board[10][256][256]={0};
    bool win[10]={false},someone_win=false;
    char player_name[10][65];
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%s",player_name[i]);
        for(int j=0;j<m;j++){
            for(int k=0;k<m;k++){
                scanf("%d",&player_board[i][j][k]);
            }
        }
    }
    for(int i=0;i<m*m;i++){
        int current_num;
        scanf("%d",&current_num);
        for(int k=0;k<n;k++){
            insert(k,player_board,current_num);
            if(i>=m-1&&check_win(k,player_board,current_num)){
                win[k]=true;
                someone_win=true;
            }
        }
        if(someone_win){
            bool is_first;
            printf("%d",current_num);
            for(int j=0;j<n;j++){
                if(win[j]){
                printf(" %s",player_name[j]);
                }
            }
            return 0;
        }
    }
}