#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
int max_depth=0,size_of_triangle,result_game_board[36][7][7]={0},result_move[36][2][2]={0}, current_game_board[36][7][7]={0}, current_move[36][2][2]={0},area,target_depth,Solution_count=0,remain;//result_move[n][k],from k=0 to k=1.
bool vertical_symmetry(int depth,int row,int col){
    if(row!=col){
        return false;
    }
    for(int i=0;i<size_of_triangle;i++){
        for(int j=0;j<=i/2;j++){
            if(current_game_board[depth][i][j]!=current_game_board[depth][i][i-j]){
                return false;
            }
        }
    }
    return true;
}
bool slope_positive_symmetry(int depth,int row,int col){
    if(row+col+1!=size_of_triangle){
        return false;
    }
    for(int i=0;i<size_of_triangle;i++){
        for(int j=0;j<=i;j++){
            if(current_game_board[depth][i][j]!=current_game_board[depth][size_of_triangle-1-j][size_of_triangle-1-i]){
                return false;
            }
        }
    }
    return true;
}
bool slope_negative_symmetry(int depth,int row,int col){
    if(2*row+1!=size_of_triangle+col){
        return false;
    }
    for(int i=0;i<size_of_triangle;i++){
        for(int j=0;j<=i;j++){
            if(current_game_board[depth][i][j]!=current_game_board[depth][size_of_triangle-i+j-1][j]){
                return false;
            }
        }
    }
    return true;
}
void dfs(int depth){
    /*****************************更新答案******************************/
    if(depth==target_depth){
        Solution_count++;
        printf("Solution %d found with %d pegs left at step %d\n",Solution_count,remain,target_depth);
        for(int i=0;i<=target_depth;i++){
            if(i==0){
                printf("Step 0: Initial Board\n");
            }
            else{
                printf("Step %d: Moved from (%d,%d) to (%d,%d)\n",i,current_move[i][0][0],current_move[i][0][1],current_move[i][1][0],current_move[i][1][1]);
            }
            for(int j=0;j<size_of_triangle;j++){
                for(int k=j;k<size_of_triangle-1;k++){
                    printf(" ");
                }
                for(int k=0;k<=j;k++){
                    if(current_game_board[i][j][k]==-1){
                        printf(" 0");
                    }
                    else{
                        printf(" %d",current_game_board[i][j][k]);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
        return;
    }
    /*****************************遊戲過程******************************/
    for(int i=0;i<size_of_triangle;i++){
        for(int j=0;j<=i;j++){
            if(current_game_board[depth][i][j]==-1){
                //form 右上 to 左下
                if(!slope_negative_symmetry(depth,i,j)&&i-2>=0 && current_game_board[depth][i-1][j]==1 && current_game_board[depth][i-2][j]==1){
                    memcpy(current_game_board[depth+1],current_game_board[depth],sizeof(current_game_board[depth]));
                    current_move[depth+1][1][0]=i;
                    current_move[depth+1][1][1]=j;
                    current_move[depth+1][0][0]=i-2;
                    current_move[depth+1][0][1]=j;
                    current_game_board[depth+1][i][j]=1;
                    current_game_board[depth+1][i-1][j]=-1;
                    current_game_board[depth+1][i-2][j]=-1;
                    dfs(depth+1);
                }
                //form 正右 to 正左
                if(!slope_positive_symmetry(depth,i,j)&&j-2>=0 && current_game_board[depth][i][j-1]==1 && current_game_board[depth][i][j-2]==1){
                    memcpy(current_game_board[depth+1],current_game_board[depth],sizeof(current_game_board[depth]));
                    current_move[depth+1][1][0]=i;
                    current_move[depth+1][1][1]=j;
                    current_move[depth+1][0][0]=i;
                    current_move[depth+1][0][1]=j-2;
                    current_game_board[depth+1][i][j]=1;
                    current_game_board[depth+1][i][j-1]=-1;
                    current_game_board[depth+1][i][j-2]=-1;
                    dfs(depth+1);
                }
                // form 左下 to 右上
                if(!slope_negative_symmetry(depth,i,j)&&i+2<size_of_triangle && current_game_board[depth][i+1][j]==1 && current_game_board[depth][i+2][j]==1){
                    memcpy(current_game_board[depth+1],current_game_board[depth],sizeof(current_game_board[depth]));
                    current_move[depth+1][1][0]=i;
                    current_move[depth+1][1][1]=j;
                    current_move[depth+1][0][0]=i+2;
                    current_move[depth+1][0][1]=j;
                    current_game_board[depth+1][i][j]=1;
                    current_game_board[depth+1][i+1][j]=-1;
                    current_game_board[depth+1][i+2][j]=-1;
                    dfs(depth+1);
                }
                //form 正右 to 正左
                if(!slope_positive_symmetry(depth,i,j)&&j+2<=i && current_game_board[depth][i][j+1]==1 && current_game_board[depth][i][j+2]==1){
                    memcpy(current_game_board[depth+1],current_game_board[depth],sizeof(current_game_board[depth]));
                    current_move[depth+1][1][0]=i;
                    current_move[depth+1][1][1]=j;
                    current_move[depth+1][0][0]=i;
                    current_move[depth+1][0][1]=j+2;
                    current_game_board[depth+1][i][j]=1;
                    current_game_board[depth+1][i][j+1]=-1;
                    current_game_board[depth+1][i][j+2]=-1;
                    dfs(depth+1);
                }
                //form 右下 to 左上
                if(!vertical_symmetry(depth,i,j)&&i-2>=0&&j-2>=0&&current_game_board[depth][i-1][j-1]==1 && current_game_board[depth][i-2][j-2]==1){
                    memcpy(current_game_board[depth+1],current_game_board[depth],sizeof(current_game_board[depth]));
                    current_move[depth+1][1][0]=i;
                    current_move[depth+1][1][1]=j;
                    current_move[depth+1][0][0]=i-2;
                    current_move[depth+1][0][1]=j-2;
                    current_game_board[depth+1][i][j]=1;
                    current_game_board[depth+1][i-1][j-1]=-1;
                    current_game_board[depth+1][i-2][j-2]=-1;
                    dfs(depth+1);
                }
                //form 左上 to 右下 
                if(!vertical_symmetry(depth,i,j)&&i+2<size_of_triangle&&j+2<=i+2&&current_game_board[depth][i+1][j+1]==1 && current_game_board[depth][i+2][j+2]==1){
                    memcpy(current_game_board[depth+1],current_game_board[depth],sizeof(current_game_board[depth]));
                    current_move[depth+1][1][0]=i;
                    current_move[depth+1][1][1]=j;
                    current_move[depth+1][0][0]=i+2;
                    current_move[depth+1][0][1]=j+2;
                    current_game_board[depth+1][i][j]=1;
                    current_game_board[depth+1][i+1][j+1]=-1;
                    current_game_board[depth+1][i+2][j+2]=-1;
                    dfs(depth+1);
                }
            }
        }
    }
}
int main(){
    /******************************基本輸入******************************/
    int initial_zero_pos[2]={0};
    printf("Welcome to triangle solitaire puzzle!\n");
    printf("Please enter the size of the triangle:\n");
    scanf("%d",&size_of_triangle);
    area=(size_of_triangle+size_of_triangle*size_of_triangle)/2;
    while (true){
        printf("Please enter the target number of pegs to remain:\n");
        scanf("%d",&remain);
        if(remain>area-1){
            printf("Invalid target number, please try again.\n");
        }
        else{
            break;
        }
    }
    target_depth=area-remain-1;
    while(true){
        printf("Enter the row and column of the empty space (starting from 0):\n");
        scanf("%d%d",&initial_zero_pos[0],&initial_zero_pos[1]);
        if(initial_zero_pos[0]>=size_of_triangle||initial_zero_pos[1]>=size_of_triangle){
            printf("Invalid position, please try again.\n");
        }
        else{
            break;
        }
    }
    /******************************初始化棋盤(空位為-1,旗子為1)******************************/
    for(int i=0;i<size_of_triangle;i++){
        for(int j=0;j<=i;j++){
            if(i==initial_zero_pos[0]&&j==initial_zero_pos[1]){
                result_game_board[0][i][j]=-1;
                current_game_board[0][i][j]=-1;
            }
            else{
                result_game_board[0][i][j]=1;
                current_game_board[0][i][j]=1;
            }
        }
    }
    dfs(0);
    if(Solution_count==0){
        printf("Warning: Could not find a solution within reasonable steps.\n");
    }
    else{
        printf("Minimum steps: %d\n",target_depth);
        printf("Total solutions found: %d\n",Solution_count);
    }
    printf("Goodbye! Thanks for playing Triangle Solitaire!\n");
}