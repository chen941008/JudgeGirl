#include <stdio.h>
int main(){
    int Divisor,Dividend,Accuracy,Quotient,Remainder;
    scanf("%d%d%d",&Dividend,&Divisor,&Accuracy);
    Quotient=Dividend/Divisor;
    Remainder=Dividend%Divisor;
    printf("%d.",Quotient);
    for(int i=0;i<Accuracy;i++){
        Remainder*=10;
        printf("%d",Remainder/Divisor);
        Remainder%=Divisor;
    }
}