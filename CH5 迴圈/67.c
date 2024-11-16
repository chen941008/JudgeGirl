#include <stdio.h>
int main (void)
{
    while (1) {
        int n;
        scanf("%d",&n);
        if (n==0)break;
        else{
            int point_x,point_y;
            scanf("%d %d",&point_x,&point_y);
            for(int i=0;i<n;i++){
                int location_x,location_y;
                scanf("%d %d",&location_x,&location_y);
                if(point_x==location_x || point_y==location_y) printf("divisa\n");
                else if (location_x>point_x && location_y>point_y) printf("NE\n");
                else if (location_x>point_x && location_y<point_y) printf("SE\n");
                else if (location_x<point_x && location_y>point_y) printf("NO\n");
                else printf("SO\n");
            }
        }
    }
    return 0;
}