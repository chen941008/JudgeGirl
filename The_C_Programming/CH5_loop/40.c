#include <stdio.h>
int main(){
    int a,b,gcd=1;
    scanf("%d%d",&a,&b);
    printf("%d",1);
    for(int i=2;i<=a&&i<=b;i++){
        if(a%i==0&&b%i==0){
            printf(" %d",i);
            gcd=i;
        }
    }
    printf("\n%d",gcd);
}