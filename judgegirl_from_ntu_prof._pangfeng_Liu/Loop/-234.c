#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long int factor[10000]={0},factor_count=0;
long long int big(long long int a,long long int b){
    return a > b ? a : b;
}
long long int small(long long int a,long long int b){
    return a > b ? b : a;
}
int compare(const void* a, const void* b) {
    return (*(long long int*)a - *(long long int*)b);
}
int main(){
    long long int a,b,c;
    scanf("%lld%lld%lld",&a,&b,&c);
    if (c == 0) {
        for (long long int x = -100000; x <= 100000; x++) {
            long long int y = a - x; 
            if (x * y == b) { 
                if(0<small(x, y)){
                    printf("0 %lld %lld\n", small(x, y), big(x, y));
                    return 0;
                }
                if(0>big(x,y)){
                    printf("%lld %lld 0\n", small(x, y), big(x, y));
                    return 0;
                }
                else{
                    printf("%lld 0 %lld\n", small(x, y), big(x, y));
                    return 0;
                }
            }
        }
    }
    for (long long int i = 1; i * i <= llabs(c); i++) {
        if (llabs(c) % i == 0) {
            factor[factor_count++] = i;
            factor[factor_count++] = -i;
            if (i != c / i) { 
                factor[factor_count++] = llabs(c) / i;
                factor[factor_count++] = -(llabs(c) / i);
            }
        }
    }
    qsort(factor, factor_count, sizeof(long long int), compare);
    for(long long int i=0;i<factor_count;i++){
        for(long long int j=i;j<factor_count;j++){
            for(long long int k=j;k<factor_count;k++){
                if((factor[i]+factor[j]+factor[k]==a)&&
                (factor[i]*factor[j]+factor[j]*factor[k]+factor[k]*factor[i])==b&&
                factor[i]*factor[j]*factor[k]==c){
                    printf("%lld %lld %lld\n",factor[i],factor[j],factor[k]);
                    return 0;
                }
            }
        }
    }
}