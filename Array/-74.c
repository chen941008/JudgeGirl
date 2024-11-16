#include <stdio.h>
int main(){
    int n,m,arr[100000]={0},remender[100000]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        remender[arr[i]%m]++;
    }
    for(int i=0;i<m;i++){
        printf("%d\n",remender[i]);
    }
}