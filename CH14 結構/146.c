#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
 
typedef struct pair {
    int frequency;
    char charASCII;
} pair;
int compare(const void* a, const void* b) {
    pair* pa = (pair*)a;
    pair* pb = (pair*)b;

    // 頻率由低到高排序
    if (pa->frequency != pb->frequency) {
        return pa->frequency - pb->frequency;
    }

    // 頻率相同時，ASCII 值由大到小排序
    return pb->charASCII - pa->charASCII;
}
void print(pair* myData)
{
    int i;
    for (i=0 ; i<95 ; i++)
        (myData[i].frequency==0)?printf(""):printf("%d %d\n",myData[i].charASCII,myData[i].frequency);
}
 
int main()
{
    struct pair* myData=(struct pair*)malloc(95*sizeof(struct pair));
    int i, len, flag=0;
    char str[9999];
 
    while (gets(str)!=NULL) {
        if (flag!=0) printf("\n");
        flag++;

        for(int i=0;i<95;i++){
            myData[i].frequency=0;
            myData[i].charASCII=i+32;
        }
        for(int i=0;str[i]!='\0';i++){
            if(str[i]>=32&&str[i]<=126){
                myData[str[i]-32].frequency++;
            }
        }
        qsort(myData,95,sizeof(pair),compare);
        print(myData);
    }
    free(myData);
    return 0;
}