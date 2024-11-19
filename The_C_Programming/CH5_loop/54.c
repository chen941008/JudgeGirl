#include <stdio.h>
#include <stdbool.h>
int main(){
    int times;
    scanf("%d",&times);
    while(times--){
        int num;
        bool is_prime=true;
        scanf("%d",&num);
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                is_prime=false;
                printf("%d is not prime.\n",num);
                break;
            }
        }
        if(is_prime){
            bool is_emirp=true;
            int num_copy=num,revese=0;
            while (num>0){
                revese=revese*10+num%10;
                num/=10;
            }
            if(num_copy==revese){
                printf("%d is prime.",num_copy);
                continue;
            }
            else{
                for(int i=2;i*i<=revese;i++){
                    if(revese%i==0){
                        is_emirp=false;
                        printf("%d is prime.\n",num_copy);
                        break;
                    }
                }
            }
            if(is_emirp){
                printf("%d is emirp.\n",num_copy);
            }
        }
    }
}