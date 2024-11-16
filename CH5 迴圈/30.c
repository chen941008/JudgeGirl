#include <stdio.h>
#include <stdlib.h>
int main(){
    int num,count=0,sum_odd=0,sum_even=0;
    scanf("%d",&num);
    while (num>0){
        if(count%2==0){
            sum_even+=num%10;
        }
        else{
            sum_odd+=num%10;
        }
        num/=10;
        count++;
        
    }
    printf("%d\n",abs(sum_even-sum_odd));
}