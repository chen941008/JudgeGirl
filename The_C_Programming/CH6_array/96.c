#include <stdio.h>
int main(){
    int n,count[101]={0};
    scanf("%d",&n);
    while (n--){
        int input;
        scanf("%d",&input);
        count[input]++;
    }
    for(int i=0;i<101;i++){
        if(count[i]==1){
            printf("%d\n",i);
            break;
        }
    }
}