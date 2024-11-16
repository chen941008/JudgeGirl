#include "_A_B_C.h"
#include <stdio.h>
void _A_B_C(int num1, int num2) {
    int a=0,b=0,c=0,arr_1[4],arr_2[4];
    for(int i=0;i<4;i++){
        arr_1[i]=num1%10;
        arr_2[i]=num2%10;
        num1/=10;
        num2/=10;
    }
    for(int i=0;i<4;i++){
        if(arr_1[i]==arr_2[i]){
            a++;
            continue;
        }
        for(int j=0;j<4;j++){
            if(arr_1[i]==arr_2[j])
            b++;
            continue;
        }
    }
    c=(4-a-b)*2;
    printf("%dA%dB%dC\n",a,b,c);
}
