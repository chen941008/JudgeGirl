#include <stdio.h>
long long int n,num[15]={0};
long long int count_subset(long long int index,long long int traget){
    if(traget==0)return 1;
    else if(traget<0||index>=n) return 0;
    else{
        return count_subset(index+1,traget-num[index])+count_subset(index+1,traget);
    }
}
int main(){
    long long int traget;
    scanf("%lld",&n);
    for(int i=0;i<n;i++){
        scanf("%lld",&num[i]);
    }
    while(scanf("%lld",&traget)!=EOF){
        printf("%lld\n",count_subset(0,traget));
    }
}