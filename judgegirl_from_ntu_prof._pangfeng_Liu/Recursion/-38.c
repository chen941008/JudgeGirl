#include <stdio.h>
#include <stdbool.h>
long int D,a,b,c,A,B,C;
bool dfs(int current_a,int current_b,int current_c){
    if(current_a>a||current_b>b||current_c>c||current_a*A+current_b*B+current_c*C>D)return false;
    else if(current_a*A+current_b*B+current_c*C==D)return true;
    else{
        return (dfs(current_a+1,current_b,current_c)||
                dfs(current_a,current_b+1,current_c)||
                dfs(current_a,current_b,current_c+1));
    }
}
int main(){
    int times;
    scanf("%d",&times);
    while (times--){
        scanf("%ld%ld%ld%ld%ld%ld%ld",&D,&a,&b,&c,&A,&B,&C);
        if(dfs(0,0,0))printf("yes\n");
        else printf("no\n");
    }
}