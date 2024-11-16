#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char name1[100],name2[100],combine_name[200];
    int suitability[100]={0},len=0;
    scanf("%s%s",name1,name2);
    for(int i=0;name1[i]!='\0';i++){
        name1[i]=toupper(name1[i]);
    }
    for(int i=0;name2[i]!='\0';i++){
        name2[i]=toupper(name2[i]);
    }
    strcpy(combine_name,name1);
    strcat(combine_name,name2);
    for(int i=0;combine_name[i]!='\0';i++){
        if(combine_name[i]>=65){
            int count=1;
            for(int j=i+1;combine_name[j]!='\0';j++){
                if(combine_name[i]==combine_name[j]){
                    combine_name[j]='0';
                    count++;
                }
            }
            if(count>=10){
                suitability[len++]=count/10;
            }
            suitability[len++]=count%10;
        }
    }
    while (len>=3){
        if(suitability[0]==1&&suitability[1]==0&&suitability[2]==0){
            printf("100\n");
            return 0;
        }
        int current_suitability[20]={0},current_len=0;
        for(int i=0;i<(len+1)/2;i++){
            int sum;
            if(i==len-1-i){
                sum=suitability[i];
            }
            else{
                sum=suitability[i]+suitability[len-1-i];
            }
            if(sum>=10){
                current_suitability[current_len++]=sum/10;
            }
            current_suitability[current_len++]=sum%10;
        }
        for(int i=0;i<current_len;i++){
            suitability[i]=current_suitability[i];
        }
        len=current_len;
    }
    if(suitability[0]==0&&suitability[1]==0){
        printf("0\n");
    }
    else if(suitability[0]==0){
        printf("%d\n",suitability[1]);
    }
    else{
        printf("%d%d\n",suitability[0],suitability[1]);
    }
    return 0;
}