#include "unity.h"

extern void automated_test_Binary_to_Decimal();
extern void automated_test_Octal_to_Decimal();
extern void automated_test_Hexadecimal_to_Decimal();
extern void automated_test_Decimal_to_Binary();
extern void automated_test_Decimal_to_Octal();
extern void automated_test_Decimal_to_Hexadecimal();

void setUp(void)
{
}

void tearDown(void)
{
}

int main(void)
{
    
    UnityBegin(NULL);

    RUN_TEST(automated_test_Binary_to_Decimal);
    RUN_TEST(automated_test_Octal_to_Decimal);
    RUN_TEST(automated_test_Hexadecimal_to_Decimal);
    RUN_TEST(automated_test_Decimal_to_Binary);
    RUN_TEST(automated_test_Decimal_to_Octal);
    RUN_TEST(automated_test_Decimal_to_Hexadecimal);
    
    return (UnityEnd());
}