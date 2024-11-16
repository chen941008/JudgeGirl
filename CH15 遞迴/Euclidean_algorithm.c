#include "Euclidean_algorithm.h"
int Euclidean_algorithm(int n, int m){
    if(n<m){//保證n>m
        int temp=n;
        n=m;
        m=temp;
    }
    if(n%m==0)return m;
    else return Euclidean_algorithm(m,n%m);
}