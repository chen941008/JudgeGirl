#include <stdio.h>
void bubble_sort(unsigned long long  int data[],int size) {
    unsigned long long int temp;
    for(int i=size;i>0;i--){
        for(int j=1;j<i;j++){
            if(data[j-1]>data[j]){
                temp=data[j-1];
                data[j-1]=data[j];
                data[j]=temp;
            }
        }
    }
}

int main (void)
{
    while (1) {
        unsigned long long int number,n,m,arr[15]={0};
        scanf("%llu",&number);
        if(number==0)break;
        int count=0;
        for(int i=0;i<10;i++){
            m=(number-i)/9;
            n=10*m+i;
            if(n==m+number){
                arr[count]=n;
                count++;
            }
        }
        bubble_sort(arr, count);
        for(int i=0;i<count;i++){
            if(i==count-1)printf("%llu\n",arr[i]);
            else printf("%llu ",arr[i]);
        }
    }
    return 0;
}