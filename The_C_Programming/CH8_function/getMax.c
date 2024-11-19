//
//  getMax.c
//  MatrixTranspose
//
//  Created by 陳宥愷 on 2024/10/2.
//
#include <stdio.h>
#include "getMax.h"
void getMax(int data[], int size) {
    int big=-2147483648;
    for(int i=0;i<size;i++){
        if(data[i]>big)big=data[i];
    }
    printf("%d\n",big);
}
