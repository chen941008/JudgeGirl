#include <stdio.h>
int count_road(int current_r,int current_c,int r,int c){
    if(current_r==r&&current_c==c)return 1;
    else if(current_r>r||current_c>c) return 0;
    else return count_road(current_r+1,current_c,r,c)+count_road(current_r,current_c+1,r,c);
}
int main(int argc, const char * argv[]) {
    int r,c;
    scanf("%d%d",&r,&c);
    printf("%d\n",count_road(1,1,r,c));
    return 0;
}