#include <stdio.h>
#include <math.h>
#include <string.h>
#include "unity.h"
#include "Conversion.h"

int Binary_to_Decimal(int n)
{
    int p,q,r,b[20];
    p=0;
    while(n>0)
    {
        b[p] = n%10;
        n=n/10;
        p++;
    }
    q=p-1;
    r=0;
    while(q>=0)
    {
        r=r+(b[q]*pow(2,q));
        q--;
    }
    return r;
}

int Octal_to_Decimal(long int n)
{
    int p,q,r,b[20];
    p=0;
    while(n>0)
    {
        b[p] = n%10;
        n=n/10;
        p++;
    }
    q=p-1;
    r=0;
    while(q>=0)
    {
        r=r+(b[q]*pow(8,q));
        q--;
    }
    return r;
}

int Hexadecimal_to_Decimal(char h[17])
{
    long long r;
    int i = 0, b[17],p,l;
    p=0;
    r = 0;
    l = strlen(h);
    l--;
    for(i=0; h[i]!='\0'; i++)
    {
        if(h[i]>='0' && h[i]<='9')
        {
            b[p] = h[i] - 48;
        }
        else if(h[i]>='A' && h[i]<='F')
        {
            b[p] = h[i] - 55;
        }
        r = r+(b[p]*pow(16, l));
        l--;
        }
        return r;
}

void automated_test_Binary_to_Decimal()
{
    TEST_ASSERT_EQUAL(7, Binary_to_Decimal(111)); 
    TEST_ASSERT_EQUAL(6, Binary_to_Decimal(110));
}

void automated_test_Octal_to_Decimal()
{
    TEST_ASSERT_EQUAL(8, Octal_to_Decimal(10)); 
    TEST_ASSERT_EQUAL(12, Octal_to_Decimal(14));
}

void automated_test_Hexadecimal_to_Decimal()
{
    TEST_ASSERT_EQUAL(10, Hexadecimal_to_Decimal("A")); 
    TEST_ASSERT_EQUAL(15, Hexadecimal_to_Decimal("F"));
}

#if 0
int main()

{
    automated_test_Binary_to_Decimal();
    automated_test_Octal_to_Decimal();
    automated_test_Hexadecimal_to_Decimal();
    return 0;
}
#endif