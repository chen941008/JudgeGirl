#include "gcd.h"
#include <stdio.h>

void gcd(int a,int b) {//a>b
    int max=1;
    for(int i=1;i<=b&&i<=a;i++){
        if(b%i==0&&a%i==0)max=i;
    }
    printf("%d與%d的最大公因數為%d\n",a,b,max);
}
