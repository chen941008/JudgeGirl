#include <stdio.h>
#include <ctype.h>

int main(){
    long long int square=0,n,x=1,y=1;
    scanf("%lld", &n);
    for (long long int i = 1; i * i < n; i++) {
        square = i;
    }
    square++;
    int const delat = square*square - n;
    if (square % 2 == 0) {//先下(y)再左(x)
        x = square;
        if (delat <= square - 1) {
            y += delat;
        }
        else{
            y += square - 1;
            x -= delat -square + 1;
        }
    }
    else {//先右(x)再上(y)
        y = square;
        if (delat <= square - 1) {
            x += delat;
        }
        else {
            x += square - 1;
            y -= delat - square + 1;
        }
    }
    printf("%lld %lld", x, y);
}
