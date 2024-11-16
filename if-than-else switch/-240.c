#include <stdio.h>
void bubble_sort(int data[],int size) {
    int temp;
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
int main(){
    int n;
    scanf("%d",&n);
    while (n--){
        int pos[4][2]={0},length[6]={0},count=0;
        for(int i=0;i<4;i++){
            for(int j=0;j<2;j++){
                scanf("%d",&pos[i][j]);
            }
        }
        for(int i=0;i<4;i++){ //0*1 0*2 0*3 1*2 1*3 2*3
            for(int j=i+1;j<4;j++){
                length[count++]=(pos[i][0]-pos[j][0])*(pos[i][0]-pos[j][0])+(pos[i][1]-pos[j][1])*(pos[i][1]-pos[j][1]);
            }
        }
        bubble_sort(length,6);
        int length_difference=0;
        for(int i=1;i<6;i++){
            if(length[i]!=length[i-1])length_difference++;
        }
        if(length[0]==length[3]&&length[4]==length[5])printf("square\n");
        else if(length[0]==length[1]&&length[2]==length[3]&&length[4]==length[5])printf("rectangle\n");
        else if(length_difference==2)printf("diamond\n");
        else printf("other\n");
    }
}