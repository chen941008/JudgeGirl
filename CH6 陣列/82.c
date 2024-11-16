#include <stdio.h>
int main(){
    int player,turn;
    while (1){
        int score[501]={0},max_score=-1,winner;
        scanf("%d%d",&player,&turn);
        if(!(player||turn))break;
        for(int j=0;j<turn;j++){
            for(int i=1;i<=player;i++){
                int input;
                scanf("%d",&input);
                score[i]+=input;
            }
        }
        for(int i=1;i<=player;i++){
            if(score[i]>=max_score){
                max_score=score[i];
                winner=i;
            }
        }
        printf("%d\n",winner);
    } 
}