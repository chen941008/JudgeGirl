#include "value.h"
#include <stdio.h>
#include <stdbool.h>
int Euclidean_algorithm(int n, int m){
    if(n<m){//保證n>m
        int temp=n;
        n=m;
        m=temp;
    }
    if(n%m==0)return m;
    else return Euclidean_algorithm(m,n%m);
}
int value(int type, int width, int height, int length){
    bool in_type=false;
    if(type==79)in_type=true;
    else if(type==47)in_type=true;
    else if(type==29)in_type=true;
    else if(type==82)in_type=true;
    else if(type==26)in_type=true;
    else if(type==22)in_type=true;
    if(!in_type){
        return -1;
    }
    if(width<=0||height<=0||length<=0){
        return -2;
    }
    int gcd=Euclidean_algorithm(Euclidean_algorithm(width,height),length);
    switch (type)
    {
    case 79:
        return gcd*gcd*gcd*30*(width*height*length);
        break;
    case 47:
        return gcd*gcd*gcd*10*(width*height*length);
        break;
    case 29:
        return gcd*gcd*gcd*4*(width*height*length);
        break;
    case 82:
        return gcd*gcd*gcd*5*(width*height*length);
        break;
    case 26:
        return gcd*gcd*gcd*3*(width*height*length);
        break;
    case 22:
        return gcd*gcd*gcd*9*(width*height*length);
        break;
    
    default:
        break;
    }
    return 0;
}