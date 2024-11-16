#include <stdio.h>
int main(){
    int num1,num2,num1_digit[4]={0},num2_digit[4]={0};
    scanf("%d%d",&num1,&num2);
    for(int i=0;i<4;i++){
        num1_digit[i]=num1%10;
        num2_digit[i]=num2%10;
        num1/=10;
        num2/=10;
    }
    int a=0,b=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==j&&num1_digit[i]==num2_digit[j]){
                a++;
            }
            else if(num1_digit[i]==num2_digit[j]){
                b++;
            }
        }
    }
    printf("%dA%dB\n",a,b);
}