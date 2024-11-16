#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==1){
            printf("1");
        }
        for(int j=0;j<i/2;j++){
            printf("01");
        }
        printf("\n");
    }
}