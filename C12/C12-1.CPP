#include <iostream>
using namespace std;

bool isLeapYear(int year) {
return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int day_of_years(int day, int month, int year) {
int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

if (isLeapYear(year)) {
days_in_month[1] = 29;
}

int day_of_year = 0;
for (int i = 0; i < month - 1; ++i) {
day_of_year += days_in_month[i];
}

day_of_year += day;

return day_of_year;
}

int main() {
int day, month, year;

cout << "Enter day: ";
cin >> day;
cout << "Enter month: ";
cin >> month;
cout << "Enter year: ";
cin >> year;

int result = day_of_years(day, month, year);
cout << "The date " << year << "-" << month << "-" << day << " is the " << result << "th day of the year." << endl;

return 0;
}