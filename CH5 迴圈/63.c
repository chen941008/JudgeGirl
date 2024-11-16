#include <stdio.h>
int main (void)
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int arr[35]={0};
        int number=0,count=0;
        scanf("%d",&number);
        if(number==1){
            printf("1\n");
            continue;
        }
        if(number==0){
            printf("0\n");
            continue;
        }
        else{
            for(int j=9;j>=2;j--){
                while (number%j==0) {
                    number/=j;
                    arr[count]=j;
                    count++;
                }
            }
        }
        if(number!=1)printf("-1\n");
        else{
            for(int j=count-1;j>=0;j--){
                if(j==0)printf("%d\n",arr[j]);
                else printf("%d",arr[j]);
            }
        }
    }
    return 0;
}