#include "LastElement.h"
#include <limits.h>
int index;
int extractMax(int* stone, int stoneSize) {
    int max=INT_MIN;
    for(int i=0;i<stoneSize;i++){
        if(stone[i]>max){
            max=stone[i];
            index=i;
        }
    }
    stone[index]=-1;
    return max;
}
 
void insert(int* stone, int stoneSize, int value) {
    stone[index]=value;
}

int lastStoneWeight(int* stones, int stonesSize) {
    int element=0;
    for(int i=0;i<stonesSize;i++){
        if(stones[i]>=0)element++;
    }
    if(element==0)return 0;
    if(element==1){
        for(int i=0;i<stonesSize;i++){
            if(stones[i]>=0)return stones[i];
        }
    }
    int y=extractMax(stones, stonesSize);
    int x=extractMax(stones, stonesSize);
    if(x!=y)insert(stones, stonesSize, y-x);
    return lastStoneWeight(stones, stonesSize);
}
