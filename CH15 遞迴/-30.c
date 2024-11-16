#include <stdio.h>
int array[13][13]={0};
int count_road(int current_r,int current_c,int traget_r,int traget_c){
    if(current_r==traget_r&&current_c==traget_c)return 1;
    else if(current_r<traget_r||current_c>traget_c) return 0;
    else if(array[current_r][current_c]==0)return 0;
    else return count_road(current_r-1,current_c,traget_r,traget_c)+count_road(current_r,current_c+1,traget_r,traget_c);
}
int main(int argc, const char * argv[]) {
    int r,c;
    scanf("%d%d",&r,&c);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            scanf("%d",&array[i][j]);
        }
    }
    printf("%d\n",count_road(r,1,1,c));
    return 0;
}