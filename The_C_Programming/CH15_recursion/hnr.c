#include "hnr.h"
#include <stdio.h>


void hnr(int n, char starting_peg, char auxiliary_peg, char destination_peg) {
    if(n==1){

        printf("盤子從%c移到%c\n",starting_peg,destination_peg);
        return;
    }


    hnr(n-1,starting_peg,destination_peg,auxiliary_peg);


    printf("盤子從%c移到%c\n",starting_peg,destination_peg);


    hnr(n-1,auxiliary_peg,starting_peg,destination_peg);
}
