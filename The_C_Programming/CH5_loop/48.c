#include <stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%5==0)continue;
        else if(i%7==0||i%10==7)sum+=2*i;
        else sum+=i;
    }
    printf("%d\n",sum);
}