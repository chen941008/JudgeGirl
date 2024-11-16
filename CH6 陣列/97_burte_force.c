#include <stdio.h>
int main(){
    int len,arr[100]={0},max=-101;
    scanf("%d",&len);
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=len;i++){//subset len form 1 to len;
        for(int j=0;j<len-i+1;j++){//subset 開頭
            int sum=0;
            for(int k=j;k<j+i;k++){
                sum+=arr[k];
            }
            if(sum>max){
                max=sum;
            }
        }
    }
    printf("%d\n",max);
}