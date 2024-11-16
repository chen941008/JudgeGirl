#include "moneyPerm.h"
 
int moneyPerm(int K){
  if(K==0)return 1;
  else if(K<0)return 0;
  else{
    return moneyPerm(K-10)+moneyPerm(K-5)+moneyPerm(K-1);
  }
}