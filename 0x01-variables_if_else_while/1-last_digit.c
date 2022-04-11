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
int pet;

srand(time(0));
n = rand() - RAND_MAX / 2;

pet = n % 10;
if (pet > 5)
{
printf("Last digit of %d is %d and is greater than 5\n",n, pet);
}
else if (pet == 0)
{
printf("Last digit of %d is %d and is 0\n", n, pet);
}
else if ((pet < 6) && (pet ! = 0))
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, pet);
}

return (0);

}

