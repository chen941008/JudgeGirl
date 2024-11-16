//
//  main.c
//  -244. Lottery
//
//  Created by 陳宥愷 on 2024/10/11.
//

#include <stdio.h>
int money(int special,int first,int number){
    int count=0;
    if(special==number)count+=2000000;
    if(first==number)count+=200000;
    else {
        for(int i=10000000;i>=1000;i/=10){
            if(first%i==number%i){
                switch (i) {
                    case 10000000:
                        count+=40000;
                        break;
                    case 1000000:
                        count+=10000;
                        break;
                    case 100000:
                        count+=4000;
                        break;
                    case 10000:
                        count+=1000;
                        break;
                    case 1000:
                        count+=200;
                        break;
                    default:
                        break;
                }
                break;
            }
        }
    }
    return count;
}
int main(int argc, const char * argv[]) {
    int special[3]={0},first[3]={0},number;
    for (int i=0;i<3;i++){
        scanf("%d",&special[i]);
    }
    for (int i=0;i<3;i++){
        scanf("%d",&first[i]);
    }
    int ans=0;
    while (scanf("%d",&number)!=EOF) {
        for(int i=0;i<3;i++){
            ans+=money(special[i], first[i], number);
        }
    }
    printf("%d\n",ans);
    return 0;
}
