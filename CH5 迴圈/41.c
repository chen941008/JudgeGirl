#include <stdio.h>
int gcd(int a,int b){
    if(b>a){//a>b
        int temp=a;
        a=b;
        b=temp;
    }
    if(a%b==0)return b;
    return gcd(b,a%b);
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(gcd(a,b)==1){
        printf("兩數互質\n");
    }
    else{
        printf("兩數不互質\n");
    }
}