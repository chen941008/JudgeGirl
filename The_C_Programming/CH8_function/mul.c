#include "mul.h"
void mul(int a[3][3], int b[3][3], int c[3][3]) {//matrix a i*k matrix b k*j matrix c i*j
    // c = a * b

    // iterate over each element in the output matrix
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            // initialize the element to 0
            c[i][j] = 0;
            // calculate the dot product of row i in a and column j in b
            for(int k=0;k<3;k++){
                // add the product of a[i][k] and b[k][j] to c[i][j]
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
