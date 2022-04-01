/**
 * @file Conversion.h
 * @author Rupika Sri
 * @brief Header file for Conversion of NumberSystem
 *
 */

#ifndef __NUMBERSYSTEM_CONVERSION_H__
#define __NUMBERSYSTEM_CONVERSION_H__

#include <stdio.h>
#include <math.h>
#include <string.h>

/**
* @brief converts Binary to Decimal returns the result
* @param[in] n binary number that is to be converted
* @return Result after converting n
*/
int Binary_to_Decimal(int n);

/**
* @brief converts Octal to Decimal and returns the result
* @param[in] n octal number that is to be converted
* @return Result after converting n
*/
int Octal_to_Decimal(long int n);

/**
* @brief converts Hexadecimal to Decimal and returns the result
* @param[in] n hexadecimal number that is to be converted
* @return Result after converting n
*/
int Hexadecimal_to_Decimal(char h[17]);

/**
* @brief converts Decimal to Binary and returns the result 
* @param[in] h[17] decimal number that is to be converted
* @return Result after converting h
*/
int Decimal_to_Binary(int n);

/**
* @brief converts Decimal to Octal and returns the result
* @param[in] n decimal number that is to be converted
* @return Result after converting n
*/
int Decimal_to_Octal(int n);

/**
* @brief converts Decimal to Hexadecimal and returns the result 
* @param[in] n decimal number that is to be converted
* @return Result after converting n
*/
int Decimal_to_Hexadecimal(int n);

#endif /* #define __NUMBERSYSTEM_CONVERSION_H__ */