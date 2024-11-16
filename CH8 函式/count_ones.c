#include "count_ones.h"
int count_ones(int dec_num) {
    int count=0;
    while (dec_num!=0) {
        if(dec_num%2!=0){
            dec_num--;
            dec_num/=2;
            count++;
        }
        else dec_num/=2;
    }
    return count;
}
