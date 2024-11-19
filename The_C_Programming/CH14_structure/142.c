#include <stdio.h>
#include <stdlib.h>


void floodFill(int** image, int imageSize, int sr, int sc, int newColor) {
    int ori_color=image[sr][sc];
    if(image[sr][sc]==newColor)return;
    image[sr][sc]=newColor;
    if(sr-1>=0 && ori_color==image[sr-1][sc])floodFill(image,imageSize,sr-1,sc,newColor);
    if(sc-1>=0 && ori_color==image[sr][sc-1])floodFill(image,imageSize,sr,sc-1,newColor);
    if(sr+1<imageSize && ori_color==image[sr+1][sc])floodFill(image,imageSize,sr+1,sc,newColor);
    if(sc+1<imageSize && ori_color==image[sr][sc+1])floodFill(image,imageSize,sr,sc+1,newColor);
}

int main() {
    int n;
    int sr, sc, newColor;
    scanf("%d", & n);
    int** p = NULL;
    p = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        p[i] = (int*)malloc(sizeof(int) * n);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int tmp;
            scanf("%d", &tmp);
            p[i][j] = tmp;
        }
    }
    scanf("%d", &sr);
    scanf("%d", &sc);
    scanf("%d", &newColor);
    floodFill(p, n, sr, sc, newColor);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        free(p[i]);
    }
    free(p);
    return 0;
}
