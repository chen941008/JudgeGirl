#include <stdio.h>
int main(){
    double n,sum=0.0;
    scanf("%lf",&n);
    for(int i=1;i<=n;i++){
        sum+=1.0/i;
    }
    printf("%.2lf\n",sum);
}