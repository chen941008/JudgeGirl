#include "years.h"
#include <stdio.h>
void years(int year) {
    if(year%400==0||((year%4==0)&&(year%100!=0)))printf("%d是閏年\n",year);
    else printf("%d是平年\n",year);
}
