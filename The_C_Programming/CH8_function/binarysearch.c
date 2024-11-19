#include "binarysearch.h"
#include <stdio.h>
#include <stdbool.h>
int binarysearch(int data[], int search, int n) {
    int low=0,high=n-1,mid;
    while (low<=high) {
        mid=(low+high)/2;
        if(data[mid]==search)return mid;
        else if(data[mid]>search)high=mid-1;
        else low=mid+1;
    }
    return -1;
}
