#include <stdio.h>
int main(){
    char const *heaven[10]={"甲","乙","丙","丁","戊","己","庚","辛","壬","癸"},
               *earth[12]={"子","丑","寅","卯","辰","巳","午","未","申","酉","戌","亥"};
    int input;
    scanf("%d",&input);
    printf("%s%s\n",heaven[input%10],earth[input%12]);
}