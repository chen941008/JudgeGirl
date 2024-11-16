#include <stdio.h>
#include "Happynumber.h"
int arr[10000],size=0;
int *p=arr;

int next_n(int n) {
    int sum=0;
    while (n>0) {
        sum+=(n%10)*(n%10);
        n/=10;
    }
    return sum;
}
 
bool contains(int* history, int size, int n) {
    for(int i=0;i<size;i++){
        if(history[-i]==n){
            return true;
        }
    }
    return false;
}
 
bool isHappy(int n) {
    if(n==1)return true;
    else if (contains(p, size , n)) return false;
    else {
        *(p++)=n;
        size++;
    }
    return isHappy(next_n(n));
}

