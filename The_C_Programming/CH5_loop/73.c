#define _GNU_SOURCE
#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    double side,angle;
    char str[4];
    while (scanf("%lf%lf%s",&side,&angle,str)!=EOF){
        if(!strcmp("min",str))angle/=60.0;
        angle=angle*M_PI/180.0;
        double arc_distance=(6440+side)*angle;
        double chord_distance=sqrt(2*(6440+side)*(6440+side)-2*(6440+side)*(6440+side)*cos(angle));
        printf("%.6lf %.6lf\n",arc_distance,chord_distance);
    }
}