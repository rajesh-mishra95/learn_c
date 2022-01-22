#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

float distance(int a, int b, int r){
    return sqrt((a-r)*(a-r) + (b-r)*(b-r));
}

void print_circle(int r){
    int dim = 2*r + 1;
    for (int i = 0; i < dim; i++){
        for (int j = 0; j < dim; j++){
            if (fabs(distance(i, j, r) - r) < 0.1){
                printf("@");
            } else if (fabs(distance(i, j, r) - r) < 0.3){
                printf("O");
            } else if (fabs(distance(i, j, r) - r) < 0.5){
                printf("*");
            } else if (fabs(distance(i, j, r) - r) < 0.7){
                printf("+");
            } else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int radius;
    scanf("%d", &radius);    
    print_circle(radius);
    return 0;
}
