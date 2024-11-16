#include <stdio.h>
#include <stdlib.h>
int input[13]={0},count=0,combination[1000][21]={0},current_combination[21]={0},combination_count = 0;
void dfs(int current_sum,int depth,int sequence){
    if(current_sum>21){
        return;
    }
    else if(current_sum==21){
        for(int i=0;i<depth;i++){
            combination[combination_count][i]=current_combination[i];
        }
        combination_count++;
        return;
    }
    else{
        for(int j=sequence;j<count;j++){
            current_combination[depth]=input[j];
            dfs(current_sum+input[j],depth+1,j);
        }
    }
}
int compare(const void *a, const void *b) {
    int int_a = *(int*)a;  
    int int_b = *(int*)b;  

    return (int_a<int_b)? -1:1;
}
int main(){
    while (scanf("%d",&input[count])!=EOF){
        count++;
    }
    qsort(input,count,sizeof(int),compare);
    dfs(0,0,0);
    printf("%d\n",combination_count);
    for(int i=0;i<combination_count;i++){
        for(int j=0;combination[i][j]!=0;j++){
            if(j==0){
                printf("%d",combination[i][j]);
            }
            else{
                printf(" %d",combination[i][j]);
            }
        }
        printf("\n"); 
    }
}