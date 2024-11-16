#include "array_add.h"
void array_add(int *a, int *b, int size) {
    for(int i=0;i<size;i++){
        a[i]+=b[i];
    }
}
