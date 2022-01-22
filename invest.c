#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int m, r, n;
    double total_amount;
    scanf("%d %d %d", &m, &r, &n);
    total_amount = m*(1-pow((r/100.0), n+1))/(1-r/100.0);
    printf("%.4f\n", total_amount);
    return 0;
}