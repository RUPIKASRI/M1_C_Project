#include <stdio.h>
#include <string.h>
#include <math.h>
#include "unity.h"
#include "Conversion.h"

int Decimal_to_Binary(int n)
{
    int m=0,r,i=1;
    while(n != 0)
    {
        r = n%2;
        m = (r*i) + m;
        n = n/2;
        i= i*10;
    }
    return m;
}

int Decimal_to_Octal(int n)
{
    int m=0,r,i=1;
    while(n != 0)
    {
        r = n%8;
        m = (r*i) + m;
        n = n/8;
        i= i*10;
    }
    return m;
}

int Decimal_to_Hexadecimal(int n)
{
    int m=0,r,i=1;
    while(n != 0)
    {
        r = n%16;
        if(r<10)
           r = r+48;
        else
           r = r+55;
           m = (r*i) + m;
           n = n/16;
           i= i*10; 
    }
    return m;
}
void automated_test_Decimal_to_Binary()
{
    TEST_ASSERT_EQUAL(1010, Decimal_to_Binary(10)); 
    TEST_ASSERT_EQUAL(11011, Decimal_to_Binary(27));
}

void automated_test_Decimal_to_Octal()
{
    TEST_ASSERT_EQUAL(14, Decimal_to_Octal(12)); 
    TEST_ASSERT_EQUAL(31, Decimal_to_Octal(25));
}

void automated_test_Decimal_to_Hexadecimal()
{
    TEST_ASSERT_EQUAL('C', Decimal_to_Hexadecimal(12)); 
    TEST_ASSERT_EQUAL('E', Decimal_to_Hexadecimal(14));
}

#if 0
int main()

{
    automated_test_Decimal_to_Binary();
    automated_test_Decimal_to_Octal();
    automated_test_Decimal_to_Hexadecimal();
    return 0;
}
#endif