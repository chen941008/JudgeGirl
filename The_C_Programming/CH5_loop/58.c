#include <stdio.h>

int cycle_count(int n){
    int count=1;
    while (n!=1){
        if(n%2==1){
            n=3*n+1;
        }
        else{
            n/=2;
        }
        count++;
    }
    return count;
}
int main(){
    int lower_bound,upper_bound,times;
    scanf("%d",&times);
    while (times--){
        scanf("%d%d",&lower_bound,&upper_bound);
        int max=0,i;
        if(lower_bound>upper_bound){
            int temp=lower_bound;
            lower_bound=upper_bound;
            upper_bound=temp;
        }
        for(i=lower_bound;i<=upper_bound;i++){
            int cycle=cycle_count(i);
            if(cycle>max)max=cycle;
        }
        printf("%d\n",max);
    }
}