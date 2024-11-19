#include "ASCII.h"
char ascii(char sign, int num, char msg) {
    int move;
    if(sign=='-')move=(msg-'A'-num+26)%26;
    else move=(msg-'A'+num)%26;
    return move+'A';
}
