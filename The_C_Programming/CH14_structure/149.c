#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct data{
    char med[16];
    int time;
}data;
int main(){
    int times;
    scanf("%d",&times);
    while(times--){
        int med_n,take_n;
        scanf("%d%d",&med_n,&take_n);
        data *dataArray=(data*)malloc(med_n * sizeof(data));
        for(int i=0;i<med_n;i++){
            scanf("%s%d",(dataArray[i].med),&(dataArray[i].time));
        }
        int clock=0;
        while (take_n>0){
            clock++;
            for(int i=0;i<med_n;i++){
                if(clock%dataArray[i].time==0&&take_n>0){
                    printf("%d %s\n",clock,dataArray[i].med);
                    take_n--;
                }
            }
        }
        free(dataArray);
    }
}