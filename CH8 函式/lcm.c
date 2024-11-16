#include "lcm.h"
int lcm(int a, int b) {
    if(a<b){
        int temp=b;
        b=a;
        a=temp;
    }
    for(int i=a;i<=a*b;i++){
        if(i%a==0&&i%b==0)return i;
    }
    return 0;
}
