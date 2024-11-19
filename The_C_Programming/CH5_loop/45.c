#include <stdio.h>
int main(){
    int n;
    double sum=0.0,factorial=1.0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        factorial*=i;
        sum+=i/factorial;
    }
    printf("%.5lf",sum);
}