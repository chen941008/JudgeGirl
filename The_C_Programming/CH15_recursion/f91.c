#include "f91.h"
int f91(int n) {
    if(n<=100)return f91(f91(n+11));
    else return n-10;
}
