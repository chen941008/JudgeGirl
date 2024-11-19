#include <stdio.h>
int main(){
    int times;
    scanf("%d",&times);
    while (times--){
        int stores,max=0,min=100;
        scanf("%d",&stores);
        while (stores--){
            int pos;
            scanf("%d",&pos);
            if(pos>max)max=pos;
            if(pos<min)min=pos;
        }
        printf("%d\n",(max-min)*2);
    }
}