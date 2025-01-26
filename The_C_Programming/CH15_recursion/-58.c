#include <stdio.h>
int rows,cols,lake[400][400]={0},result[10000]={0},count=0;
int count_lakes(int current_row,int current_col){
    if(current_row<0||current_row>=rows||current_col<0||current_col>=cols||lake[current_row][current_col]==0){
        return 0;
    }
    lake[current_row][current_col]=0;
    return 1 + count_lakes(current_row + 1, current_col)
             + count_lakes(current_row - 1, current_col)
             + count_lakes(current_row, current_col + 1)
             + count_lakes(current_row, current_col - 1);
}
int compare(const void *a,const void *b){
    return -(*(int *)a-*(int *)b);
}
int main(){
    scanf("%d%d",&rows,&cols);
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&lake[i][j]);
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(lake[i][j]==1){
                result[count]=count_lakes(i,j);
                count++;
            }
        }
    }
    qsort(result,count,sizeof(int),compare);
    for(int i=0;i<count;i++){
        printf("%d\n",result[i]);
    }
    return 0;
}