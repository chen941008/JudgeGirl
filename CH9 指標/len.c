#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void len(char *arr)
{
    int lence=0;
    while (arr[lence]!='\0') {
        lence++;
    }
    printf("%d",lence);
}
