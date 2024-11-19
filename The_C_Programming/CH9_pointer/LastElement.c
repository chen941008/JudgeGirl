#include "LastElement.h"
#include <limits.h>
int pos[1000]={0},count=0;//偶數為y 奇數為x
int extractMax(int* stone, int stoneSize) {
    int max=INT_MIN;
    for(int i=0;i<stoneSize;i++){
        if(stone[i]>max){
            max=stone[i];
            pos[count]=i;
        }
    }
    stone[pos[count]]=-1;
    return max;
}
 
void insert(int* stone, int stoneSize, int value) {
    stone[pos[count]]=value;
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
    count++;
    int x=extractMax(stones, stonesSize);
    if(x!=y)insert(stones, stonesSize, y-x);
    return lastStoneWeight(stones, stonesSize);
}
