#include <stdio.h>


struct Date {
    int year, month, day;
};

int main(){
    struct Date day1, day2;
	
	printf("enter year1:");
	scanf("%d",&day1.year);

	printf("enter month1:");
	scanf("%d",&day1.month);

	printf("enter day1:");
	scanf("%d",&day1.day);

	printf("enter year2:");
	scanf("%d",&day2.year);

	printf("enter month2:");
	scanf("%d",&day2.month);

	printf("enter day2:");
	scanf("%d",&day2.day);

	if (day1.year < day2.year || 
       (day1.year == day2.year && day1.month < day2.month) || 
       (day1.year == day2.year && day1.month == day2.month && day1.day < day2.day)) {
        printf("较小的日期是：%d-%02d-%02d\n", day1.year, day1.month, day1.day);
    } else {
        printf("较小的日期是：%d-%02d-%02d\n", day2.year, day2.month, day2.day);
    }

	return 0;
}