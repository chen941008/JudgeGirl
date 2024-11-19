#include <stdio.h>
int stone[10]={0};
int main() {
    int input;
    while (scanf("%d",&input)!=EOF){
        stone[input]++;
    }
    for(int i=0;i<10;i++){
        if(stone[i]%3!=0){
            printf("%d\n",i);
        }
    }
}
