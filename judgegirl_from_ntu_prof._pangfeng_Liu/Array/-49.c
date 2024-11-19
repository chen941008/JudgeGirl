#include <stdio.h>
int main(){
    int n,m,max[1000]={0},min[1000]={0},sum[1000]={0};
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++){
        min[i]=10000;
    }
    while (n--)
    {
        int num;
        scanf("%d",&num);
        sum[num%m]+=num;
        if(num>max[num%m])max[num%m]=num;
        if(num<min[num%m])min[num%m]=num;
    }
    for(int i=0;i<m;i++){
        printf("%d %d %d\n",sum[i],max[i],min[i]);
    }
}