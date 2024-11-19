#include <stdio.h>
int main(){
    int N,sum=0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            sum+=j;
        }
    }
    printf("%d\n",sum);
}