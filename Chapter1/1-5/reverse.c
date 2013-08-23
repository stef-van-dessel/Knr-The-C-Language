/*
 * Filename:    CtoF.c
 * Author:      Stef Van Dessel <stef@deITfabriek.com>
 * Date:        21-AUG-2013
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 1-5, page 17
 *
 * Modify the temperature conversion program to print the table in reverse order,
*  that is, from 300 degrees to 0.
 */

#include <stdio.h>
main()
{
  float fahr, celsius;
  float lower, upper, step;
   
  lower = 0; /* lower limit of temperature scale */
  upper = 300; /* upper limit */
  step = 20; /* step size */
    
  printf("  C    F  \n");
  printf("----------\n");
  
  celsius = upper;
  while (celsius >= lower) {
       fahr = celsius * 1.8 + 32.0;
       printf("%3.0f %6.1f\n", celsius, fahr);
       celsius = celsius - step;
    }
}

 