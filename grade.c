#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char get_grade(int marks) {
    char arr_grade[101] = {[96] = 'B+', 'B+', [98] = 'A-', [99] = 'A', [100] = 'A+'};
    char a[2] = {'A', '+'};
    char b[2] = {'B', '+'};
    for (int i = 91; i <= 95; i++) {
        arr_grade[i] = 'B';
    }
    for (int i = 86; i <= 90; i++) {
        arr_grade[i] = 'B-';
    }
    for (int i = 81; i <= 85; i++) {
        arr_grade[i] = 'C+';
    }
    for (int i = 71; i <= 80; i++) {
        arr_grade[i] = 'C';
    }
    for (int i = 61; i <= 70; i++) {
        arr_grade[i] = 'D+';
    }
    for (int i = 51; i <= 60; i++) {
        arr_grade[i] = 'D';
    }
    for (int i = 0; i <= 50; i++) {
        arr_grade[i] = 'F';
    }
    return arr_grade[marks];
}

int main() {
    int marks;
    scanf("%d", &marks);
    char c = get_grade(marks);
    putchar(c);
    printf("\n");
    return 0;
}