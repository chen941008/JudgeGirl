#include<stdio.h>
#include<math.h>
void bubble_sort(int data[]) {
    int temp;
    for(int i=3;i>0;i--){
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
    while (n--)
    {
        int pos[3][2]={0},length[3]={0};
        for(int i=0;i<3;i++){
            scanf("%d%d",&pos[i][0],&pos[i][1]);
        }
        for(int i=0;i<3;i++){
            length[i]=(pos[i][0]-pos[(i+1)%3][0])*(pos[i][0]-pos[(i+1)%3][0])+
                      (pos[i][1]-pos[(i+1)%3][1])*(pos[i][1]-pos[(i+1)%3][1]);
        }
        bubble_sort(length);
        if(length[0]==length[1]||length[1]==length[2]){
            printf("isosceles\n");
            continue;
        }
        else{
            if(length[0]+length[1]>length[2])printf("acute\n");
            else if (length[0]+length[1]==length[2])printf("right\n");
            else printf("obtuse\n");
        }
    }
}