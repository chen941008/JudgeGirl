#include <stdio.h>
#include <string.h>
int main(){
    typedef struct Student Student;
    struct Student{
        char studentName[20];
        int score;
    };
    Student students[3];
    int max_score=-1,sum=0,max_student=0;
    for(int i=0;i<3;i++){
        scanf("%s%d",students[i].studentName,&students[i].score);
        sum+=students[i].score;
        if(students[i].score>max_score){
            max_student=i;
            max_score=students[i].score;
        }
    }
    printf("avg = %d\nmax = %s",sum/3,students[max_student].studentName);
}