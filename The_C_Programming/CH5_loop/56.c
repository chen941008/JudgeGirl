#include <stdio.h>
int main(){
    int times;
    scanf("%d",&times);
    while (times--){
        int lower_bound,upper_bound,sum=0;
        scanf("%d%d",&lower_bound,&upper_bound);
        if(lower_bound%2==0)lower_bound++;
        if(upper_bound%2==0)upper_bound--;
        for(int i=lower_bound;i<=upper_bound;i+=2){
            sum+=i;
        }
        printf("%d\n",sum);
    }
}