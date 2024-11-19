#define _GNU_SOURCE
#include <math.h>
#include <stdio.h>
int main(){
    long long int radius;
    scanf("%lld",&radius);
    printf("pi=%.5f\n",M_PI);
    printf("radius=%lld\n",radius);
    printf("circumference=%.5f\n",2*radius*M_PI);
    printf("area=%.5f\n",radius*radius*M_PI);
}