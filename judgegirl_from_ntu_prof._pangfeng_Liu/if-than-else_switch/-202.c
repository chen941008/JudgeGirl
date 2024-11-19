#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int Euclidean_algorithm(int n, int m){
    if(n<m){//保證n>m
        int temp=n;
        n=m;
        m=temp;
    }
    if(n%m==0)return m;
    else return Euclidean_algorithm(m,n%m);
}
int main(){
    int  a, b, c, d, e, f, g,numerator,denominator,quotient;
    scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g); 
    if(b==0)c=1;
    if(f==0)g=1;
    b+=abs(a)*c;
    if(a<0)b=-b;
    f+=abs(e)*g;
    if(e<0)f=-f;
    denominator=c*g;
    switch (d)
    {
    case 0:
        numerator=b*g+f*c;
        break;
    case 1:
        numerator=b*g-f*c;
        break;
    case 2:
        numerator=b*f;
        break;
    case 3:
        swap(&f,&g);
        if(g<0){
            g=-g;
            f=-f;
        }
        denominator=c*g;
        numerator=b*f;
        break;
    }
    
    quotient=numerator/denominator;
    numerator=abs(numerator)%denominator;
    if(numerator==0)denominator=1;
    else{
        int gcd=Euclidean_algorithm(abs(numerator),abs(denominator));
        numerator=abs(numerator)/gcd;
        denominator=abs(denominator)/gcd;
    }
    printf("%d\n%d\n%d\n",quotient,numerator,denominator);
}