#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year, month, day;
    int daysOfMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("输入今天的日期 (YYYY MM DD)：");
    scanf("%d %d %d", &year, &month, &day);

    if (isLeapYear(year)) daysOfMonth[1] = 29;

    day++;
    if (day > daysOfMonth[month - 1]) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }

    printf("明天的日期是：%d-%02d-%02d\n", year, month, day);
    return 0;
}
//累了