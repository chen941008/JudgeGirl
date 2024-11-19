//
//  isPalindrome.c
//  MatrixTranspose
//
//  Created by 陳宥愷 on 2024/10/2.
//

#include "isPalindrome.h"
#include <stdio.h>
void isPalindrome(int x) {

    int reverse=0,digit,temp=x;
    while (x>0) {
        digit=x%10;
        reverse=reverse*10+digit;
        x/=10;
    }
    if(reverse==temp)printf("true\n");
    else printf("false\n");
}
