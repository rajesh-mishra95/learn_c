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

int main() {
    int year;
    scanf("%d", &year);
    if (is_leap_year(year)){
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }
    return 0;
}