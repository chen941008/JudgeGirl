#include <stdio.h>
int main (void)
{
    int arr[5];
    while (1) {
        int ans=1080;
        for(int i=0;i<4;i++){
            scanf("%d",&arr[i]);
        }
        if(arr[0]==0&&arr[1]==0&&arr[2]==0&&arr[3]==0)break;
        ans+=(40+arr[0]-arr[1])%40*9;
        ans+=(40+arr[2]-arr[1])%40*9;
        ans+=(40+arr[2]-arr[3])%40*9;
        printf("%d\n",ans);
    }
    return 0;
}