#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void print_with_suffix(long n){
    if (n%100 >= 11 && n%100 <= 19){
        printf("%ldth\n", n);
    } else if (n%10 == 1){
        printf("%ldst\n", n);
    } else if (n%10 == 2){
        printf("%ldnd\n", n);
    } else if (n%10 == 3){
        printf("%ldrd\n", n);
    } else {
        printf("%ldth\n", n);
    }
}

void num_days(int month, int day){
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
    print_with_suffix(total_days);
}

int main() {
    int month, day;
    scanf("%d %d", &month, &day);
    num_days(month, day);
    return 0;
}