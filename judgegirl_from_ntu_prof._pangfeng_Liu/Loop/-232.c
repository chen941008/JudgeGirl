#include <stdio.h>
int main(){
    int year,n,day;
    scanf("%d%d%d",&year,&day,&n);
    while (n--)
    {

        int m,d;
        scanf("%d%d",&m,&d);
        if(m<=0||m>=13){
            printf("-1\n");
            continue;
        }
        if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&(d>=32||d<=0)){
            printf("-2\n");
            continue;
        }
        if((m==4||m==6||m==9||m==11)&&(d>=31||d<=0)){
            printf("-2\n");
            continue;
        }
        if(m==2){
            if(year%400==0||((year%4==0)&&(year%100!=0))){
                if(d>=30||d<=0){
                    printf("-2\n");
                    continue;
                }
            }
            else {
                if(d>=29||d<=0){
                    printf("-2\n");
                    continue;
                }
            }
        }
        while (--m){
            switch (m){
            case 1:case 3:case 5:case 7:case 8:case 10:case 12:
                d+=31;
                break;
            case 4:case 6:case 9:case 11:
                d+=30;
                break;
            case 2:
                if(year%400==0||((year%4==0)&&(year%100!=0))){
                    d+=29;
                }
                else d+=28;
                break;
            }
        }
        printf("%d\n",(day+d-1)%7);
    }
}