#include <stdio.h>
int main(){
    int state[4][5]={0},damage[3]={0},extra_blood=3,round=0;//blood、attack、defence、hit、dodge
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&state[i][j]);
        }
    }
    state[3][1]--;//修正攻擊力
    while (1){
        round++;
        //玩家攻擊//
        //小肥
        if(state[1][3]>=state[0][4]&&state[1][1]>state[0][2]){
            if(round%2==1){
                damage[0]+=(state[1][1]-state[0][2])*2;
            }
            else{
                damage[0]+=(state[1][1]-state[0][2]);
            }
        }
        //阿修
        if(state[2][3]>=state[0][4]&&state[2][1]>state[0][2]){
            damage[1]+=(state[2][1]-state[0][2]);
        }
        //老辛
        if(round%2==1)state[3][1]++;
        if(state[3][3]>=state[0][4]&&state[3][1]>state[0][2]){
            damage[2]+=(state[3][1]-state[0][2]);
        }
        //勝利條件//
        for(int i=0;i<3;i++){
            if(state[i+1][0]>0&&damage[i]>=state[0][0]){
                printf("%d %d",i,round);
                return 0;
            }
        }
        //怪獸攻擊//
        for(int i=1;i<=3;i++){
            if(state[0][3]>=state[i][4]&&state[0][1]>state[i][2]){
                state[i][0]-=state[0][1]-state[i][2];
            }
        }
        //阿修鎖血技能//
        if(state[2][0]<=0&&extra_blood>0){
            state[2][0]=1;
            extra_blood--;
        }
    }
}