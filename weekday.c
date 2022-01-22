#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool is_leap_year(int year){
    bool is_leap;
    if (year%4 == 0){
        if (year%100 == 0 && year%400 != 0){
            is_leap = false;
        } else {
            is_leap = true;
        }
    } else {
        is_leap = false;
    }
    return is_leap;
}

int num_days(int month, int day){
    int total_days;
    if (month == 1){
        total_days = day;
    } else if (month == 2){
        total_days = 31 + day;
    } else if (month == 3){
        total_days = 31 + 28 + day;
    } else if (month == 4){
        total_days = 31 + 28 + 31 + day;
    } else if (month == 5){
        total_days = 31 + 28 + 31 + 30 + day;
    } else if (month == 6){
        total_days = 31 + 28 + 31 + 30 + 31 + day;
    } else if (month == 7){
        total_days = 31 + 28 + 31 + 30 + 31 + 30 + day;
    } else if (month == 8){
        total_days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;
    } else if (month == 9){
        total_days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
    } else if (month == 10){
        total_days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
    } else if (month == 11){
        total_days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
    } else {
        total_days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
    }
    return total_days;
}

int total_days(int year, int month, int day){
    int count_days = 0;
    for (int i = 1900; i < year; i++){
        if (is_leap_year(i)){
            count_days += 366;
        } else {
            count_days += 365;
        }
    }
    count_days += num_days(month, day);
    if (is_leap_year(year)){
        if (month > 2){
            count_days += 1;
        }
    }
    return count_days;
}

void week_day(int total_days){
    int day_of_the_week = total_days%7;
    if (day_of_the_week == 0){
        printf("Sunday\n");
    } else if (day_of_the_week == 1){
        printf("Monday\n");
    } else if (day_of_the_week == 2){
        printf("Tuesday\n");
    } else if (day_of_the_week == 3){
        printf("Wednesday\n");
    } else if (day_of_the_week == 4){
        printf("Thursday\n");
    } else if (day_of_the_week == 5){
        printf("Friday\n");
    } else {
        printf("Saturday\n");
    }
}

int main() {
    int year, month, day, days;
    scanf("%d %d %d", &year, &month, &day);
    days = total_days(year, month, day);
    week_day(days);
    return 0;
}