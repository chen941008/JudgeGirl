#include <stdio.h>
int main(){
    int len,arr[100]={0};
    scanf("%d",&len);
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=(len/2)*2;i>=0;i-=2){//長度
        for(int j=0;j<len-i+1;j++){//開頭
            int sum=0;
            for(int k=j;k<j+i;k++){//遍歷長度
                sum+=arr[k];
            }
            if(sum==i/2){
                printf("%d\n",i);
                return 0;
            }
        }
    }
}