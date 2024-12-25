#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

typedef struct pair {
    int frequency;
    char charASCII;
} pair;

void print(pair* myData)
{
    int i;
    for (i=0 ; i<95 ; i++)
        (myData[i].frequency==0)?printf(""):printf("%d %d\n",myData[i].charASCII,myData[i].frequency);
}

int compare(const void *a , const void *b){
    pair *pa=(pair*)a;
    pair *pb=(pair*)b;
    if(pa->frequency==pb->frequency){
        return -(pa->charASCII-pb->charASCII);
    }
    return pa->frequency-pb->frequency;
}
int main()
{
    struct pair* myData=(struct pair*)malloc(95*sizeof(struct pair));
    int i, len, flag=0;
    char str[9999];

    while (gets(str)!=NULL) {
        if (flag!=0) printf("\n");
        flag++;
        len=strlen(str);
        for(i=0 ; i<95 ; i++) {
            myData[i].frequency=0;
            myData[i].charASCII=i+32;
        }
        for(i=0 ; i<len ; i++) {
            myData[str[i]-32].frequency++;
        }
        qsort(myData,95,sizeof(pair),compare);
        print(myData);
    }
    return 0;
}