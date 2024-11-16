#include "hex.h"
int hex(int N) {
    int sum=0,count=1,temp,b2=0;
    while (N!=0) {
        temp=N%10;
        for(int i=0;i<count;i++){
            temp*=16;
        }
        count++;
        sum+=temp;
        N/=10;
    }
    while (sum!=0) {
        if(sum%2!=0){
            b2++;
            sum--;
            sum/=2;
        }
        else sum/=2;
    }
    return b2;
}
