#include <stdio.h>
int int_power(int base,int exp){
    int temp=1;
    if(exp==0)return temp;
    else{
        for(int i=0;i<exp;i++){
            temp*=base;
        }
        return temp;
    }
}
int main (void)
{
    int n=0,ball,depth;
    while (1) {
        scanf("%d",&n);
        if(n==-1)break;
        while (n--) {
            scanf("%d%d",&depth,&ball);
            int ans=int_power(2, depth-1);//初始化該depth最左邊元素
            for(int i=1;i<depth;i++){
                if(ball%2!=0){
                    ball++;
                    ball/=2;
                }
                else {
                    ans+=int_power(2, depth-i-1);
                    ball/=2;
                }
            }
            printf("%d\n",ans);
        }
    }
    return 0;
}