#include <stdio.h>
#include <math.h>
int main(){
    long double n,p;
    scanf("%Lf%LF",&n,&p);
    printf("%.0lf",pow(p,1.0L/n));
}