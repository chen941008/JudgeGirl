#include <stdio.h>
int main(){
    long int num1,num2;
    while (scanf("%ld%ld",&num1,&num2)){
        if(!(num1&&num2))break;
        int carry_times=0,carry=0;
        for(int i=0;i<10;i++){
            if(num1%10+num2%10+carry>=10){
                carry=1;
                carry_times++;
            }
            else{
                carry=0;
            }
            num1/=10;
            num2/=10;
        }
        if(carry_times==0){
            printf("No carry operation.\n");
        }
        else if(carry_times==1){
            printf("1 carry operation.\n");
        }
        else{
            printf("%d carry operations.\n",carry_times);
        }
    }
    
}