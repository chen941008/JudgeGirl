#include <stdio.h>
int main(){
    while (1){
        int H1,H2,M1,M2;
        scanf("%d%d%d%d",&H1,&M1,&H2,&M2);
        if(!(H1||M1||H2||M2))break;
        int total_time_1=H1*60+M1,total_time_2=H2*60+M2;
        if(total_time_1>total_time_2)total_time_2+=24*60;
        printf("%d\n",total_time_2-total_time_1);
    }
}