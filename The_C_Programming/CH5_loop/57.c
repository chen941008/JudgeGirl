#include <stdio.h>
int main(){
    int a,b,c,d,day=0;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    while (1)
    {
        day++;
        if(b+c>=a)break;
        b=b+c-d;
    }
    printf("%d\n",day);
}