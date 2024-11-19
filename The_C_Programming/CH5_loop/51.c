#include <stdio.h>
int main(){
    int input,odd_sum=0;
    while (scanf("%d",&input)){
        if(!input)break;
        if(input%2==1){
            odd_sum++;
        }
    }
    printf("%d\n",odd_sum);
}