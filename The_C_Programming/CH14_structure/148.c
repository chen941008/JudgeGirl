#include <stdio.h>
#include <stdlib.h>
typedef struct DNA{
    char string[50];
    int order;
}DNA_t;
int  compare(const void *a, const void *b) {
    DNA_t *pa = (DNA_t *)a;
    DNA_t *pb = (DNA_t *)b;
    return pa->order - pb->order;
}
int count_order(char *str,int len){
    int count=0;
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(str[i]>str[j])count++;
        }
    }
    return count;
}
int main(){
    int times;
    scanf("%d",&times);
    while (times--){
        int len,number;
        scanf("%d%d",&len,&number);
        DNA_t *data=malloc(len*sizeof(DNA_t));
        for(int i=0;i<number;i++){
            scanf("%s",data[i].string);
            data[i].order=count_order(data[i].string,len);
        }
        qsort(data,number,sizeof(DNA_t),compare);
        for(int i=0;i<number;i++){
            printf("%s\n",data[i].string);
        }
        free(data);
    }
}