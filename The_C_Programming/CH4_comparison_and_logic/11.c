#include <stdio.h>
#include <stdbool.h>
int main(){
    int y,m,d;
    bool isyear=false;
    scanf("%d%d%d",&y,&m,&d);
    if((y%100!=0||y%400==0)&&y%4==0)isyear=true;
    if(isyear){
        while (--m){
            switch (m)
            {
            case 1 :case 3:case 5 :case 7:case 8 :case 10:case 12:
                d+=31;
             break;
            case 4:case 6 :case 9:case 11 :
                d+=30;
                  break;
            case 2:
                d+=29;
            default:d=d;
                break;
            }
        }
    }
    else{
        while (--m){
            switch (m)
            {
            case 1 :case 3:case 5 :case 7:case 8 :case 10:case 12:
                d+=31;
             break;
            case 4:case 6 :case 9:case 11 :
                d+=30;
                  break;
            case 2:
                d+=28;
            default:d=d;
                break;
            }
        }
    }
    printf("%d\n",d);

}