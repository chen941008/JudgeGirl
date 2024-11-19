#include <stdio.h>
#include <stdbool.h>
int main (void)
{
    int king,queen,step,checkerboard[9][9],count=0,king_row,king_column,queen_row,queen_column;
    for(int i=0;i<8;i++){                          //模擬棋盤
        for(int j=0;j<8;j++){
            checkerboard[i][j]=count;
            count++;
        }
    }
    while (scanf("%d%d%d",&king,&queen,&step)!=EOF) {
        bool legal=false,allowed=false;
        if(king==queen){
            printf("Illegal state\n");
            continue;
        }
        if(queen==step){
            printf("Illegal move\n");
            continue;
        }
        if((king==0&&step==9)||(king==7&&step==14)||(king==56&&step==49)||(king==63&&step==54)){
            printf("Stop\n");
            continue;
        }
        
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(checkerboard[i][j]==king){
                    king_row=i;
                    king_column=j;
                }
                if(checkerboard[i][j]==queen){
                    queen_row=i;
                    queen_column=j;
                }
            }
        }
        if((king==0)&&(step!=1&&step!=8))allowed=true;
        else if((king==7)&&(step!=6&&step!=15))allowed=true;
        else if((king==56)&&(step!=48&&step!=57))allowed=true;
        else if((king==63)&&(step!=55&&step!=62))allowed=true;
        else if(king_row==0&&(step!=(king+1)&&step!=(king+8)&&step!=(king-8)))allowed=true;
        else if(king_row==7&&(step!=(king-1)&&step!=(king+8)&&step!=(king-8)))allowed=true;
        else if(king_column==0&&(step!=(king-1)&&step!=(king+1)&&step!=(king+8)))allowed=true;
        else if(king_column==7&&(step!=(king-1)&&step!=(king+1)&&step!=(king-8)))allowed=true;
        else if((step!=king+1)&&(step!=king-1)&&(step!=king+8)&&(step!=king-8))allowed=true;
        else allowed=false;
        if(king_row==queen_row){
            for(int i=0;i<8;i++){
                if(checkerboard[i][queen_column]==step){
                    legal=true;
                    break;
                }
            }
            if(king<queen){
                for(int i=king_column+1;i<8;i++){
                    if(checkerboard[queen_row][i]==step){
                        legal=true;
                        break;
                        
                    }
                }
            }
            else{
                for(int i=king_column-1;i>=0;i--){
                    if(checkerboard[queen_row][i]==step){
                        legal=true;
                        break;
                    }
                }
            }
        }
        else if(king_column==queen_column){
            for(int i=0;i<8;i++){
                if(checkerboard[queen_row][i]==step){
                    legal=true;
                    break;
                }
            }
            if(king<queen){
                for(int i=king_row+1;i<8;i++){
                    if(checkerboard[i][queen_column]==step){
                        legal=true;
                        break;
                    }
                }
            }
            else{
                for(int i=king_row-1;i>=0;i--){
                    if(checkerboard[queen_row][i]==step){
                        legal=true;
                        break;
                    }
                }
            }
        }
        else{
            for(int i=0;i<8;i++){
                if((checkerboard[queen_row][i]==step||checkerboard[i][queen_column]==step)){
                    legal=true;
                    break;
                }
            }
        }
        if(legal&&allowed)printf("Continue\n");
        else if(!legal)printf("Illegal move\n");
        else if(!allowed)printf("Move not allowed\n");
    }
    return 0;
}