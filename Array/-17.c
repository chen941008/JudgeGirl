#include <stdio.h>
int main(){
    int r,c,arr[100][100]={0};
    scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<c;i++){
        long long int sum=0,average=0;
        for(int j=0;j<r;j++){
            sum+=arr[j][i];
        }
        average=sum/r;
        printf("%lld\n",average);
    }
}