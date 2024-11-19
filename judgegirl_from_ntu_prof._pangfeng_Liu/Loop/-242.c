#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d",&n);
    while (n--){
        int circle[3][3]={0},count=0,in_circle[1000][2]={0},in_two_circle=0;//x,y,r
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                scanf("%d",&circle[i][j]);
            }
            for(int l=circle[i][0]-circle[i][2];l<=circle[i][0]+circle[i][2];l++){
                for(int k=circle[i][1]-circle[i][2];k<=circle[i][1]+circle[i][2];k++){
                    if((l-circle[i][0])*(l-circle[i][0])+
                       (k-circle[i][1])*(k-circle[i][1])<=circle[i][2]*circle[i][2]){
                        in_circle[count][0]=l;
                        in_circle[count][1]=k;
                        count++;
                    }
                }
            }
        }
        for(int i=0;i<count;i++){
            if(in_circle[i][0]==INT_MIN)continue;
            for(int j=i+1;j<count;j++){
                if(in_circle[i][0]==in_circle[j][0]&&in_circle[i][1]==in_circle[j][1]){
                    in_circle[i][0]=INT_MIN;
                    in_circle[j][0]=INT_MIN;
                    in_circle[i][1]=INT_MIN;
                    in_circle[j][1]=INT_MIN;
                    in_two_circle+=2;
                    break;
                }
            }
        }
        printf("%d\n",count-in_two_circle);
    }
}