#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

float surcharge_amount(int day, int hr, int min){
    float surcharge;
    if (day >= 1 && day <= 5 && hr >= 6 && hr <= 8){
        surcharge = 0.25;
    } else if (day >= 1 && day <= 5 && hr == 9 && min <= 29){
        surcharge = 0.25;
    } else if (hr >= 18 && hr <= 23){
        surcharge = 0.25;
    } else if (hr >= 0 && hr <= 5){
        surcharge = 0.50;
    } else {
        surcharge = 0.0;
    }
    return surcharge;
}

float fare_amount(int distance){
    float fare;
    if (distance <= 1000){
        return 3.40;
    } else if (distance <= 10200 && (distance-1000)%400 == 0){
        return 3.40 + 0.22*((distance-1000)/400);
    } else if (distance <= 10200){
        return 3.40 + 0.22*((distance-1000)/400 + 1);
    } else if ((distance-10200)%350 == 0){
        return 3.40 + 0.22*9200/400 + 0.22*((distance-10200)/350);
    } else {
        return 3.40 + 0.22*9200/400 + 0.22*((distance-10200)/350 + 1);
    }
}

int main() {
    int day, hr, min, distance;
    float fare, total_fare;
    scanf("%d %d %d %d", &day, &hr, &min, &distance);
    fare = fare_amount(distance);
    total_fare = fare + surcharge_amount(day, hr, min)*fare;
    printf("%f\n", fare);
    printf("%.2f\n", total_fare);
    return 0;
}
