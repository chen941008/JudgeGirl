#include <stdio.h>
#include <math.h>
int main (void)
{
    int n;
    scanf("%d",&n);
    while (n--) {
        double player,i;
        double probability;
        scanf("%lf%lf%lf",&player,&probability,&i);
        printf("%.4lf\n",((probability*pow(1.0-probability, i-1))/(1-pow(1.0-probability,player))));
    }
    return 0;
}