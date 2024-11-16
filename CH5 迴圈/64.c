#include <stdio.h>


int main() {
  int i, times, grade_num, grade, max_grade, ans;
  scanf("%d",&times) ;
  while (times--) {
    scanf("%d%d",&grade_num,&max_grade);
    ans = -1000000;
    for (i = 1; i < grade_num; i++) {
      scanf("%d",&grade);
      if (max_grade - grade > ans)
        ans = max_grade - grade;
      if (max_grade < grade)
        max_grade = grade;
    }
    printf("%d\n",ans);
  }
  return 0;
}