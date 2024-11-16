#include "array_mul.h"
void array_mul(int *a, int *b, int size) {
    for(int i=0;i<size;i++){
        a[i]*=b[i];
    }
}
