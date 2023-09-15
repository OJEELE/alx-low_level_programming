#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int dayOfYear(int month, int day, int year) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dayCount = day;

    for (int i = 1; i < month; i++) {
        dayCount += daysInMonth[i];
    }

    if (month > 2 && isLeapYear(year)) {
        dayCount += 1;
    }

    return dayCount;
}

void print_remaining_days(int month, int day, int year) {
    int totalDaysInYear = isLeapYear(year) ? 366 : 365;
    int dayCount = dayOfYear(month, day, year);
    int daysLeft = totalDaysInYear - dayCount;

    printf("Day of the year: %d\n", dayCount);
    printf("Remaining days: %d\n", daysLeft);
}
