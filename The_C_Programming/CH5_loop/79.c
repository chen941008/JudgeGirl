#include <stdio.h>
int small(int a,int b){
    if(a>b)return b;
    else return a;
}


int big(int a,int b){
    if(a>b)return a;
    else return b;
}
int main (void)
{
    int n,m;
    while (1) {
        scanf("%d%d",&n,&m);
        if(n==0&&m==0)break;
        int a=big(n, m),b=small(n, m);
        if(b==1)printf("%d knights may be placed on a %d row %d column board.\n",a,n,m);
        else if(b==2){
            if(a%4==1)printf("%d knights may be placed on a %d row %d column board.\n",a+1,n,m);
            else if (a%4==0)printf("%d knights may be placed on a %d row %d column board.\n",a,n,m);
            else printf("%d knights may be placed on a %d row %d column board.\n",(a/4+1)*4,n,m);
        }
        else{
            printf("%d knights may be placed on a %d row %d column board.\n",a*b/2+a*b%2,n,m);
        }
        
    }
    return 0;
}