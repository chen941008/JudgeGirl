#include "count_ones.h"
int count_ones(int dec_num) {
    int count=0;
    while (dec_num!=0) {
        count+=1&dec_num;
        dec_num>>=1;
    }
    return count;
}
