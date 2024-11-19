//
//  swap.c
//  functions
//
//  Created by 陳宥愷 on 2024/10/11.
//

#include "swap.h"
void swap(int *x, int *y) {
    int temp=*x;
    *x=*y;
    *y=temp;
}
