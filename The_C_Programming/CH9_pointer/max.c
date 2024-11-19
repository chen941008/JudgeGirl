#include "max.h"

int max(int *iptr, int n) {
    iptr--;
    int big=*iptr;
    while (n--) {
        if(*iptr>big)big=*iptr;
        iptr--;
    }
    return big;
}
