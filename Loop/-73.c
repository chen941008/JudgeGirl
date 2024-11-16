#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,rest[3]={0};
    scanf("%d",&n);
    while (n--) {
        int temp;
        scanf("%d",&temp);
        rest[temp%3]++;
    }
    for(int i=0;i<3;i++){
        if(i==2)printf("%d",rest[2]);
        else printf("%d ",rest[i]);
    }
    return 0;
}