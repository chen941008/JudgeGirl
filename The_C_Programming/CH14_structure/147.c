#include <stdio.h>
#include <stdlib.h>
typedef struct List{
    int num;
    int mod;
    int Even_Odd;
}List;
int  compare(const void* a,const void* b){
    List* pa = (List*)a;
    List* pb = (List*)b;
    if(pa->mod!=pb->mod){
        return pa->mod-pb->mod;
    }
    else{
        if(pa->Even_Odd!=pb->Even_Odd){
            return (pa->Even_Odd>0)? -1:1;
        }
        else if (pa->Even_Odd==1){
            return pb->num-pa->num;
        }
        else {
            return pa->num-pb->num;
        }
    }
}
int main(){
    int len,Mod;
    while(scanf("%d%d",&len,&Mod)){
        if(!(len||Mod)){
            printf("%d %d",0,0);
            break;
        }
        List *data=(List*)malloc(len*sizeof(List));
        for(int j=0;j<len;j++){
            scanf("%d",&(data[j].num));
            data[j].mod=data[j].num%Mod;
            data[j].Even_Odd=abs(data[j].num)%2;
        }
        qsort(data,len,sizeof(List),compare);
        printf("%d %d\n",len,Mod);
        for(int j=0;j<len;j++){
            printf("%d\n",data[j].num);
        }
        free(data);
    }
}