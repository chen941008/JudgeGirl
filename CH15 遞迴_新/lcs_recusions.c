#include "lcs_recusions.h"
int max(int a,int b) {
    if (a>b)return a;
    return b;
}
int lcs(int* text1, int* text2, int m, int n) {
    if(m==0 || n==0)return 0;
    if(text1[m]==text2[n])return 1+lcs(text1,text2,m-1,n-1);
    return max(lcs(text1,text2,m-1,n),lcs(text1,text2,m,n-1));
}
void int_to_array(int* array1, int value, int index) {
    for(int i=1;i<=index;i++){
        array1[i]=value%10;
        value/=10;
    }
}