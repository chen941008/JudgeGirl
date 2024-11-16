#include <stdio.h>
int main(){
    int times;
    scanf("%d",&times);
    while (times--){
        int data,score[150000]={0},max=-1000000;
        scanf("%d",&data);
        for(int i=0;i<data;i++){
            scanf("%d",&score[i]);
        }
        for(int i=0;i<data;i++){
            for(int j=i+1;j<data;j++){
                if(score[i]-score[j]>max){
                    max=score[i]-score[j];
                }
            }
        }
        printf("%d\n",max);
    }
}