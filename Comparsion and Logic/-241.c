#include <stdio.h>
#include <stdlib.h>
#define EPSILON 1e-9
long double quadrilateral_area(int pos[4][2]) {
    int sum_1 = 0, sum_2 = 0;
    for (int i = 0; i < 4; i++) {
        sum_1 += pos[i][0] * pos[(i + 1) % 4][1];  // x_i * y_(i+1)
        sum_2 += pos[i][1] * pos[(i + 1) % 4][0];  // y_i * x_(i+1)
    }
    return 0.5 * abs(sum_1 - sum_2);
}
long double triangle_area(int x1, int y1, int x2, int y2) {
    long double area = 0.5 * abs(x1 * y2 - y1 * x2);
    if (fabs(area) < EPSILON) {
        return -1;  // 若面積為零，代表原點在邊上
    }
    return area;
}
int main(){
    int pos[4][2];
    long double area_sum=0.0;
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&pos[i][j]);
        }
    }
    for(int i=0;i<4;i++){
        if(triangle_area(pos[i][0],pos[i][1],pos[(i+1)%4][0],pos[(i+1)%4][1])==-1){
            printf("0\n");
            return 0;
        }
        area_sum+=triangle_area(pos[i][0],pos[i][1],pos[(i+1)%4][0],pos[(i+1)%4][1]);
    }
    if(quadrilateral_area(pos)==area_sum)printf("1\n");
    else printf("0\n");
}
