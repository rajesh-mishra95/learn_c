#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int c, nl, nc, nw, count;
    nl = nc = nw = count = 0;
    while ((c = getchar()) != EOF){
        nc = nc + 1;
        if (c == '\n'){
            nl = nl + 1;
        }
        if (c == ' ' || c == '\n' || c == '\t'){
            if (count != 0){
                nw = nw + 1;
                count = 0;
                printf("\n");
            }
        } else {
            count = count + 1;
            putchar(c);
        }
    }
    printf("%d %d %d\n", nc, nl, nw);
}