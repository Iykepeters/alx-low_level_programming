#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of the inputed parameters
 * @n: amount of all present arguments
 * Return: sum of all parameters
 *
 */

int sum_them_all(const unsigned int n, ...)

{

va_list valist;
unsigned int i;

int may = 0;
if (n == 0)

return (0);

va_start(valist, n);

for (i = 0; i < n; i++)

may += va_arg(valist, int);
va_end(valist);

return (may);
