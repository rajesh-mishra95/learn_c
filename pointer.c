#include <stdio.h>
#include "cs1010.c"

double *triple_of(double x)
{
  double triple = 3 * x;
  return &triple;
}

int main()
{
  double *ptr;

  ptr = triple_of(10);
  cs1010_println_double(*ptr);
}
/*
int main()
{
    long *ptr1; //ptr1 stores the address of a long variable
    long *ptr2; //ptr2 stores the address of a long variable
    long x;
    long y;

    ptr1 = &x; //ptr1 stores the address of x
    ptr2 = &y; //ptr2 stores the address of y

    *ptr1 = 123; //x = 123
    *ptr2 = -1; //y = -1

    cs1010_println_long(x); //output = 123
    cs1010_println_long(y); //output = -1
    cs1010_println_long(*ptr1); //output = 123
    cs1010_println_long(*ptr2); //output = -1

    ptr1 = ptr2; //ptr1 also point to the location of y
    *ptr1 = 1946; //y = 1946

    cs1010_println_long(x); //output = 123
    cs1010_println_long(y); //output = 1946
    cs1010_println_long(*ptr1); //output = 1946
    cs1010_println_long(*ptr2); //output = 1946

    y = 10;

    cs1010_println_long(x); //output = 123
    cs1010_println_long(y); //output = 10
    cs1010_println_long(*ptr1); //output = 10
    cs1010_println_long(*ptr2); //output = 10
}
*/
