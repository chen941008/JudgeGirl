#include <stdio.h>
long long int count_step (int x,int y){
    long long int sum=(long long int)(1+x+y)*(x+y)/2+x;
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int k=1;k<=n;k++){
        int pos[2][2]={0};// 0 for x,1 for y
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                scanf("%d",&pos[i][j]);
            }
        }
        printf("Case %d: %lld\n",k,count_step(pos[1][0],pos[1][1])-count_step(pos[0][0],pos[0][1]));
    }
}