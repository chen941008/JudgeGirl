#include <stdio.h>
int main(){
    int matrix[3][3];
    float result[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    float det=0.0;
    for(int i=0;i<3;i++){
        det+=matrix[i][0]*matrix[(i+1)%3][1]*matrix[(i+2)%3][2];
        det-=matrix[(i+2)%3][0]*matrix[(i+1)%3][1]*matrix[(i)%3][2];
    }
    result[0][0]=(matrix[1][1]*matrix[2][2]-matrix[1][2]*matrix[2][1])/det;
    result[0][1]=-(matrix[0][1]*matrix[2][2]-matrix[0][2]*matrix[2][1])/det;
    result[0][2]=(matrix[0][1]*matrix[1][2]-matrix[0][2]*matrix[1][1])/det;
    result[1][0]=-(matrix[1][0]*matrix[2][2]-matrix[1][2]*matrix[2][0])/det;
    result[1][1]=(matrix[0][0]*matrix[2][2]-matrix[0][2]*matrix[2][0])/det;
    result[1][2]=-(matrix[0][0]*matrix[1][2]-matrix[0][2]*matrix[1][0])/det;
    result[2][0]=(matrix[1][0]*matrix[2][1]-matrix[1][1]*matrix[2][0])/det;
    result[2][1]=-(matrix[0][0]*matrix[2][1]-matrix[0][1]*matrix[2][0])/det;
    result[2][2]=(matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0])/det;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(result[i][j]<1e-6&&result[i][j]>-1e-6){
                printf("0 ");
            }
            else{
                printf("%f ",result[i][j]);
            }
        }
        printf("\n");
    }
}