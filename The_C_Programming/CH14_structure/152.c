#include <stdio.h>
#include <stdlib.h>

typedef struct matrix {
    int row, col;
    int* data;
} *MATRIX;
int main(){
    MATRIX a = malloc(sizeof(struct matrix)),b = malloc(sizeof(struct matrix));
    scanf("%d%d",&(a->row),&(a->col));
    a->data = malloc(a->row * a->col * sizeof(int));
    for(int i=0;i<a->row*a->col;i++){
        scanf("%d",&(a->data[i]));
    }
    scanf("%d%d",&(b->row),&(b->col));
    b->data = malloc(b->row * b->col * sizeof(int));
    for(int i=0;i<b->row*b->col;i++){
        scanf("%d",&(b->data[i]));
    }
    if(a->row==b->row&&a->col==b->col){
        for(int i=0;i<a->row*a->col;i++){
            if((i+1)%a->row==0){
                printf("%d\n",a->data[i]+b->data[i]);
            }
            else{
                printf("%d ",a->data[i]+b->data[i]);
            }
        }
    }
    else{
        printf("不可相加\n");
    }
    free(a->data); 
    free(b->data); 
    free(a); 
    free(b);
}