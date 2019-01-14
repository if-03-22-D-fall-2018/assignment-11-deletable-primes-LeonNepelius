/*----------------------------------------------------------
 *				HTBLA-Leonding / Class
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			deletable_primes.c
 * Author:			P. Bauer
 * Due Date:		October 16, 2012
 * ----------------------------------------------------------
 * Description:
 * Implementation of deletable_primes.h.
 * ----------------------------------------------------------
 */
#include "deletable_primes.h"

 unsigned long remove_digit(int index, unsigned long n)
 {
   if (is_prime(n))
   {
     
   }
   return 0;
 }

 int get_ways(unsigned long p)
 {
   return 0;
 }

 bool is_prime(unsigned long n)
 {
   if (n <= 1) return false;
     if (n % 2 == 0 && n > 2) return 0;
     for(unsigned int i = 3; i < n / 2; i+= 2)
     {
         if (n % i == 0)
             return false;
     }
   return true;
 }
