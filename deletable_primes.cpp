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
#include <math.h>

 unsigned long remove_digit(int i, unsigned long n)
 {
   if (i == 0)
   {
     return n / 10;
   }
   
   unsigned long left = 0;
   unsigned long right = 0;
   unsigned long removedNumber = 0;

   left = n / pow(10 , i + 1);
   right = n % (unsigned long)pow(10 , i);
   removedNumber = left * pow(10 , i) + right;

   return removedNumber;
 }
 int count_digits(unsigned long n)
{
  int digits = 0;

   while (n > 0)
   {
      digits++;
      n /= 10;
   }

   return digits;
}

 int get_ways(unsigned long n)
 {
   int length = 0;
   for (int i = 0; i < count_digits(n); i++)
   {
     if (count_digits(n) == 1)
     {
       if (is_prime(n))
       {
         return 1;
       }
       return 0;
     }
     else if (is_prime(remove_digit(i,n)) )
     {
       length += get_ways(remove_digit(i,n));
      }

    }
   return length;
 }

 bool is_prime(unsigned long n)
 {
    if (n == 1)
    {
       return false;
    }
    else if (n == 2)
    {
       return true;
    }
    else if ( n % 2 == 0 )
    {
       return false;
    }

    unsigned long sqroot = sqrt(n);

    for (unsigned long i = 3; i <= sqroot; i += 2 )
    {
       if (!(n % i))
       {
          return false;
       }
    }
    return true;
 }
