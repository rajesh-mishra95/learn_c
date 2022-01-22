#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int hrs, mins;
    float total_time;
    float temp;
    scanf("%d %d", &hrs, &mins);
    total_time = hrs + mins/60.0;
    temp = 4.0*total_time*total_time/(total_time+2.0) - 20.0;
    printf("%f\n", temp);
    return 0;
}