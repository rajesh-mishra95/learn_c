#include <stdio.h>
#include <string.h>
#include "cs1010.c"

int max(int a, int b)
{
  if (a > b)
  {
    return a;
  } else
  {
    return b;
  }
}

void add_digits(char *digit1, char *digit2)
{
    size_t size_digit1 = strlen(digit1);
    size_t size_digit2 = strlen(digit2);
    int carry = 0;
    int num = 0;


    char total[max(size_digit1, size_digit2) + 1];

    if (size_digit1 > size_digit2)
    {
        for (int n = 0; n < size_digit2; n++)
        {
            num  = digit1[size_digit1-n-1] - '0' + digit2[size_digit2-n-1] - '0'
                + carry;
            total[n] = num%10 + '0';
            carry = num/10;
        }
        for (int n = size_digit2; n < size_digit1; n++)
        {
            num = digit1[size_digit1-n-1] - '0' + carry;
            total[n] = num%10 + '0';
            carry = num/10;
        }
        if (carry != 0)
        {
            total[size_digit1] = carry + '0';
        } else {
            total[size_digit1] = '\0';
        }
    } else
    {   
         for (int n = 0; n < size_digit1; n++)
        {
            num  = digit1[size_digit1-n-1] - '0' + digit2[size_digit2-n-1] - '0'
                + carry;
            total[n] = num%10 + '0';
            carry = num/10;
        }
        for (int n = size_digit1; n < size_digit2; n++)
        {
            num = digit2[size_digit2-n-1] - '0' + carry;
            total[n] = num%10 + '0';
            carry = num/10;
        }
        if (carry != 0)
        {
            total[size_digit2] = carry + '0';
        } else {
            total[size_digit2] = '\0';
        }
    }

    for (int n = strlen(total)-1; n >= 0; n--)
    {
        printf("%c", total[n]);
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    char *digit1;
    char *digit2;
    digit1 = cs1010_read_word();
    digit2 = cs1010_read_word();
    size_t size_digit1 = strlen(digit1);
    size_t size_digit2 = strlen(digit2);
    add_digits(digit1, digit2);    
    return 0;
}
