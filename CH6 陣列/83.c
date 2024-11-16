#include <stdio.h>
const char* weekdays[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

// 2011年的每個月的“末日”，它們都是星期一
int doomsday_dates[] = {0, 10, 21, 7, 4, 9, 6, 11, 8, 5, 10, 7, 12};  // 1-based index for months

int day_of_week(int difference) {
    return difference %7;  // 保证结果为非负数
}
int main (void)
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int m,d,difference;
        scanf("%d%d",&m,&d);
        difference=d-doomsday_dates[m]+35;
        printf("%s\n",weekdays[day_of_week(difference)]);
    }
    return 0;
}