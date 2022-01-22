#include <stdio.h>
#include "cs1010.c"
/*
void find_min_max(long length, long array[length], long *min, long *max)
{
  for (int i = 0; i < length; i++)
  {
      if (array[i] < *min)
      {
          *min = array[i];
      } else if (array[i] > *max)
      {
          *max = array[i];
      }
  }
}

int main()
{
  long list[10] = {1, 2, 3, 4, -4, 5, 6, -8, 3, 1};
  long max = list[0];
  long min = list[0];
  find_min_max(10, list, &min, &max);
  printf("%ld\n", min);
  printf("%ld\n", max);
}
*/
void foo(double *ptr, double trouble) {
  ptr = &trouble;
  *ptr = 10.0;
}

int main() {
  double *ptr; //define a pointer
  double x = -3.0;
  double y = 7.0;
  ptr = &y; //ptr points to the address of y

  foo(ptr, x); 
  //calling this function: ptr takes the address of the stack variable trouble
  //trouble has a value of 10.0

  cs1010_println_double(x); //output = -3.0
  cs1010_println_double(y); //output = 7.0
}
