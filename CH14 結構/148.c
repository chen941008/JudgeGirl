#include <stdio.h>
#include <stdlib.h>
int n,m;
typedef struct DNA{
    char string[50];
    int order;
}DNA;
int compare(const void* a,const void* b){
    DNA* pa = (DNA*)a;
    DNA* pb = (DNA*)b;
    return pa->order-pb->order;
}
int main(){
    int times;
    scanf("%d",&times);
    while (times--){
        scanf("%d%d",&n,&m);
        DNA *dnaArray = (DNA*)malloc(m * sizeof(DNA));
        for(int i=0;i<m;i++){
            dnaArray[i].order=0;
            scanf("%s",(dnaArray[i].string));
            for(int j=0;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(dnaArray[i].string[j]>dnaArray[i].string[k]){
                        dnaArray[i].order++;
                    }
                }
            }
        }
        qsort(dnaArray,m,sizeof(DNA),compare);
        for(int i=0;i<m;i++){
            printf("%s\n",dnaArray[i].string);
        }
        free(dnaArray);
    }
}