//
//  main.c
//  -16. Even and Odd
//
//  Created by 陳宥愷 on 2024/10/11.
//  test123
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,odd[1000]={0},odd_count=0,even[1000]={0},even_count=0;
    scanf("%d",&n);
    while (n--) {
        int temp;
        scanf("%d",&temp);
        if(temp%2==0)
            even[even_count++]=temp;
        else
            odd[odd_count++]=temp;
    }
    for(int i=0;i<odd_count;i++){
        if(i==odd_count-1)printf("%d",odd[i]);
        else printf("%d ",odd[i]);
    }
    printf("\n");
    for(int i=0;i<even_count;i++){
        if(i==even_count-1)printf("%d",even[i]);
        else printf("%d ",even[i]);
    }
    return 0;
}
