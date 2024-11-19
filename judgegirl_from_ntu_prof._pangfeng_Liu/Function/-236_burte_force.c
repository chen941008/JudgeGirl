#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
int n=0,array[10000000]={0};
int main(){

    while (scanf("%d",&array[n])!=EOF)
    {
        n++;
    }
    for(int i=1;i<=INT_MAX;i++){
        bool is_ans=true;
        for(int j=0;j<n;j++){
            if(i%array[j]!=0){
                is_ans=false;
                break;
            }
        }
        if(is_ans){
            printf("%d",i);
            break;
        }
    }
}