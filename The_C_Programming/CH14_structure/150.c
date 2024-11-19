#include <stdio.h>
int main(){
    typedef struct point_t point_t;
    struct point_t {
        double x;
        double y;
    };
    point_t p1;
    scanf("%lf%lf",&p1.x,&p1.y);
    if(p1.x>0&&p1.y>0)printf("第一象限\n");
    if(p1.x<0&&p1.y>0)printf("第二象限\n");
    if(p1.x<0&&p1.y<0)printf("第三象限\n");
    if(p1.x>0&&p1.y<0)printf("第四象限\n");
}