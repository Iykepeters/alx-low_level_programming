#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program will assign a random number to the variable n each time it is executed
 *
 * Return: Always 0 (succes)
 */

int main(void)

{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("last digit of %d is %d %s\n", n, n % 10,
((n % 10) == 0) ? "and is 0"
: ((n % 10) > 5) ? "and is greater than 5"
: "and is less than 6 and not 0"));

return (0);

}
