#include <stdio.h>
#include <stdbool.h>
int Euclidean_algorithm(int n, int m){
    if(n<m){//保證n>m
        int temp=n;
        n=m;
        m=temp;
    }
    if(n%m==0)return m;
    else return Euclidean_algorithm(m,n%m);
}
int lcm(int a,int b){
    return a*b/Euclidean_algorithm(a, b);
}
int main(){
    int input,gcd,product=1,lcm_result;
    bool first=true;
    while (scanf("%d",&input)!=EOF)
    {   
        product*=input;
        if(first){
            gcd=input;
            lcm_result=input;
            first=false;
            continue;
        }
        gcd=Euclidean_algorithm(gcd,input);
        lcm_result=lcm(lcm_result,input);
    }
    printf("%d",lcm_result);
}