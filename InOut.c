#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// int main() {
//     int c, nl;
//     nl = 0;
//     while ((c = getchar()) != EOF){
//         ++nl;
//     }
//     printf("%d\n", nl);
// }

int main(){
    int c, count;
    count = 0;
    while ((c = getchar()) != EOF){
        if (c == ' '){
            if (count == 0){
                putchar(c);
                count = count + 1;
            }
        } else {
            putchar(c);
            count = 0;
        } 
    }
}
