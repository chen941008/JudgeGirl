#include <stdio.h>
int main(){
    long long int n;
    while (scanf("%lld",&n)!=EOF){
        printf("%lld\n", ( 3 * n * n + 6 * n + 3 ) / 2 - 9 );
    }
}