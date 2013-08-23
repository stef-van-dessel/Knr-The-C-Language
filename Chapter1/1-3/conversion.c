/*
 * Filename:    conversion.c
 * Author:      Stef Van Dessel <stef@deITfabriek.com>
 * Date:        21-AUG-2013
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 1-3, page 15
 *
 * Modify the temperature conversion program to print a heading above the table.
 */

#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */
main()
 {
  float fahr, celsius;
  float lower, upper, step;
   
  lower = 0; /* lower limit of temperatuire scale */
  upper = 300; /* upper limit */
  step = 20; /* step size */
  fahr = lower;
  
  printf("  F    C  \n");
  printf("----------\n");
   
   while (fahr <= upper) {
       celsius = (5.0/9.0) * (fahr-32.0);
       printf("%3.0f %6.1f\n", fahr, celsius);
       fahr = fahr + step;
       }
 }