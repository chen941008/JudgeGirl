#include <stdio.h>
int rows,cols,lake[400][400]={0},result[10000]={0},count=0;
int count_lakes(int r,int c){
    if(lake[r][c]==0||lake[r][c]==-1)return 0;
    int sum=1;
    lake[r][c]=-1;
    if(r-1>=0)sum+=count_lakes(r-1,c);
    if(c-1>=0)sum+=count_lakes(r,c-1);
    if(r+1<rows)sum+=count_lakes(r+1,c);
    if(c+1<cols)sum+=count_lakes(r,c+1);
    return sum;
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
            if(lake[i][j]==1)result[count++]=count_lakes(i,j);
        }
    }
    int temp;
    for(int i=count;i>0;i--){
        for(int j=1;j<i;j++){
            if(result[j-1]>result[j]){
                temp=result[j-1];
                result[j-1]=result[j];
                result[j]=temp;
            }
        }
    }
    for(int i=count-1;i>=0;i--){
        printf("%d\n",result[i]);
    }
}