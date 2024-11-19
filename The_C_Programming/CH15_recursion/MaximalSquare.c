#include "MaximalSquare.h"
int min(int a,int b){
   return a<b ?  a :b;
}
void findMaximalSquare(int** matrix, int rows, int cols, int *maxEdge) {
    *maxEdge=0;
    for(int i=0;i<rows+1;i++){
        for(int j=0;j<cols+1;j++){
            if(matrix[i][j]>*maxEdge)*maxEdge=matrix[i][j];
            if(i-1<0||j-1<0||matrix[i][j]==0||matrix[i-1][j-1]==0)continue;
            matrix[i][j]=1+min(min(matrix[i-1][j],matrix[i][j-1]),matrix[i-1][j-1]);
            if(matrix[i][j]>*maxEdge)*maxEdge=matrix[i][j];
        }
    }
}