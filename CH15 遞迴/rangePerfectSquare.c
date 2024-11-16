#include "rangePerfectSquare.h"
#include <limits.h>
bool rangePerfectSquare(long long int left,long long int right,long long  int target) {
    if(right==INT_MAX)right=1000000;
    long long int mid=(left+right)/2;
    if(mid*mid==target)return true;
    else if(left==right)return false;
    else if (mid*mid>target){
        return rangePerfectSquare(left, mid-1, target);
    }
    else if (mid*mid<target){
        return rangePerfectSquare(mid+1, right, target);
    }
}