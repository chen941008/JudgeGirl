#include <stdio.h>
#include <stdlib.h>
typedef struct List{
    int num;
    int mod;
    int Even_Odd;
}List_t;
int  compare(const void* a,const void* b){
    List_t *pa=(List_t*)a;
    List_t *pb=(List_t*)b;
    if(pa->mod!=pb->mod){
        return pa->mod-pb->mod;
    }
    if(pa->Even_Odd!=pb->Even_Odd){
        return -(pa->Even_Odd-pb->Even_Odd);
    }
    if(pa->Even_Odd==1){
        return -(pa->num-pb->num);
    }
    else{
        return pa->num-pb->num;
    }
}
int main(){
    while(1){
        int number,mod;
        scanf("%d%d",&number,&mod);
        if(number==0&&mod==0){
            printf("0 0\n");
            return 0;
        }
        List_t *data=malloc(number*sizeof(List_t));
        for(int i=0;i<number;i++){
            scanf("%d",&data[i].num);
            data[i].mod=data[i].num%mod;
            data[i].Even_Odd=abs(data[i].num%2);
        }
        qsort(data,number,sizeof(List_t),compare);
        printf("%d %d\n",number,mod);
        for(int i=0;i<number;i++){
            printf("%d\n",data[i].num);
        }
    }
    
}