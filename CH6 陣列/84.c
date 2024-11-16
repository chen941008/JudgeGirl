#include <stdio.h>
#include <stdbool.h>
int digit_sum(int number){
    int sum=0;
    while (number!=0) {
        sum+=number%10;
        number/=10;
    }
    return sum;
}
int main (void)
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int m;
        bool Digit_Generator=false;
        scanf("%d",&m);
        for(int i=m-50;i<=m;i++){
            if(i+digit_sum(i)==m){
                Digit_Generator=true;
                printf("%d\n",i);
                break;
            }
        }
        if(!Digit_Generator)printf("0\n");
    }
    return 0;
}