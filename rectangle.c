#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void draw_rectangle(int b, int h){
    printf("╔");
    for (int i = 0; i < b-2; i++){
        printf("═");
    }
    printf("╗");
    printf("\n");
    for (int i = 0; i < h-2; i++){
        printf("║");
        for (int i = 0; i < b-2; i++){
            printf(" ");
        }
        printf("║");
        printf("\n");
    }
    printf("╚");
    for (int i = 0; i < b-2; i++){
        printf("═");
    }
    printf("╝");
    printf("\n");
}

int main() {
    int breadth, height;
    scanf("%d %d", &breadth, &height);
    draw_rectangle(breadth, height);
    return 0;
}