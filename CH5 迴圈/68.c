#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while (n--)
    {
        long int key,door;
        scanf("%ld%ld",&key,&door);
        printf("%ld\n",(door-1+door-key)*key/2);
    }
}