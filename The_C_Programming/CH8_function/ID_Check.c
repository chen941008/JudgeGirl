#include "ID_Check.h"
#include <stdio.h>
void ID_Check(char ID[]) {
    int number=0,sum=0;
    if(ID[0]-'A'<=7)number=ID[0]-'A'+10;
    else if(ID[0]-'A'==8)number=34;
    else if (ID[0]-'A'<=13)number=ID[0]-'A'+9;
    else if (ID[0]-'A'==14)number=35;
    else if (ID[0]-'A'<=22)number=ID[0]-'A'+8;
    else if (ID[0]-'A'==23)number=32;
    else if (ID[0]-'A'<=25)number=ID[0]-'A'+7;
    else number=33;
    sum=number/10+number%10*9+(ID[9]-'0');

    for(int i=8;i>0;i--){
        sum+=(ID[9-i]-'0')*i;
    }
    if(sum%10==0)printf("real\n");
    else printf("fake\n");
}
