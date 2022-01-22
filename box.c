#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int length, width, height;
    long s_area;
    float l_diagonal;
    scanf("%d %d %d", &length, &width, &height);
    s_area = 2*(length*width + width*height + height*length);
    l_diagonal = sqrt(length*length + width*width + height*height);
    printf("%ld %.4f\n", s_area, l_diagonal);
    return 0;
}