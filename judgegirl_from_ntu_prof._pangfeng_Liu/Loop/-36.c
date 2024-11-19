#include <stdio.h>
int main(){
    int y,m,d,days=0;
    scanf("%d%d%d",&y,&m,&d);
    if(m>=13||m<=0||y<1000||y>3000||d<0||d>6){
        printf("invalid\n");
        return 0;
    }
    switch (m){
    case 1:case 3:case 5:case 7:case 8:case 10:case 12:
        days+=31;
        break;
    case 4:case 6:case 9:case 11:
        days+=30;
        break;
    case 2:
        if(y%400==0||((y%4==0)&&(y%100!=0))){
            days+=29;
        }
        else days+=28;
        break;
    }
    printf(" Su Mo Tu We Th Fr Sa\n");
    printf("=====================\n");
    for(int i=0;i<d;i++){
        printf("   ");
    }
    for(int i=1;i<=days;i++){
        if((i==days&&!(i+d)%7==0)){
            printf("%3d\n",i);
            break;
        }
        if((i+d)%7==0)printf("%3d\n",i);
        else printf("%3d",i);
        
    }
    printf("=====================\n");
}